1763. 最长的美好子字符串

当一个字符串 s 包含的每一种字母的大写和小写形式 同时 出现在 s 中，就称这个字符串 s 是 美好 字符串。比方说，"abABB" 是美好字符串，因为 'A' 和 'a' 同时出现了，且 'B' 和 'b' 也同时出现了。然而，"abA" 不是美好字符串因为 'b' 出现了，而 'B' 没有出现。

给你一个字符串 s ，请你返回 s 最长的 美好子字符串 。如果有多个答案，请你返回 最早 出现的一个。如果不存在美好子字符串，请你返回一个空字符串。

 

示例 1：

输入：s = "YazaAay"
           j
输出："aAa"
解释："aAa" 是一个美好字符串，因为这个子串中仅含一种字母，其小写形式 'a' 和大写形式 'A' 也同时出现了。
"aAa" 是最长的美好子字符串。
示例 2：

输入：s = "Bb"
输出："Bb"
解释："Bb" 是美好字符串，因为 'B' 和 'b' 都出现了。整个字符串也是原字符串的子字符串。
示例 3：

输入：s = "c"
输出：""
解释：没有美好子字符串。
示例 4：

输入：s = "dDzeE"
输出："dD"
解释："dD" 和 "eE" 都是最长美好子字符串。
由于有多个美好子字符串，返回 "dD" ，因为它出现得最早。
 

提示：

1 <= s.length <= 100
s 只包含大写和小写英文字母。

class Solution {
public:
    string longestNiceSubstring(const string &s) {
        int lower[26] = {0};  // 记录小写字母
        int upper[26] = {0};  // 记录大写字母
        // 遍历一遍，将字母放入数组
        for (char c : s) {
            int idx = c - 'a';
            if (idx >= 0 && idx < 26) {
                lower[idx] = 1;
            }
            int idx2 = c - 'A';
            if (idx2 >= 0 && idx2 < 26) {
                upper[idx2] = 1;
            }
        }
        // 将大小写都出现的字母记下来
        int arr[26] = {0};
        for (int i = 0; i < 26; ++i) {
            if (lower[i] && upper[i]) {
                arr[i] = 1;
            }
        }

        string ans;
        int j = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (IsPerfect(arr, s[i])) {
                if (i - j + 1 > ans.size()) {
                    string ss = s.substr(j, i - j + 1);
                    // 滑动窗口里全都是大小写同时出现的字母
                    if (Check(ss)) {
                        if (ans.size() < ss.size()) {
                            ans = ss;
                        }
                    } else {
                        string ret = longestNiceSubstring(ss);
                        if (ans.size() < ret.size()) {
                            ans = ret;
                        }
                    }
                }
            } else {
                j = i + 1;
            }
        }
        return ans;
    }
private:
    bool IsPerfect(int *arr, const char c) {
        int idx = c - 'a';
        if (idx >= 0 && idx < 26 && arr[idx] == 0) {
            return false;
        }
        int idx2 = c - 'A';
        if (idx2 >= 0 && idx2 < 26 && arr[idx2] == 0) {
            return false;
        }
        return true;
    }
    bool Check(const string &s) {
        set<char> se;
        for (char c : s) {
            se.insert(c);
        }
        for (char c : se) {
            if (islower(c)) {
                if (se.find(toupper(c)) == se.end()) {
                    return false;
                }
            } else if (se.find(tolower(c)) == se.end()) {
                return false;
            }
        }
        return true;
    }
};
