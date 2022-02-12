/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (!root) {
            return {};
        }

        vector<int> ans;
        queue<TreeNode*> que;
        que.push(root);
        TreeNode *cur = nullptr;

        while (!que.empty()) {
            int size = que.size();

            for (int i = 0; i < size; ++i) {
                cur = que.front();
                que.pop();

                if (i == size - 1) {
                    ans.push_back(cur->val);
                }

                if (cur->left) {
                    que.push(cur->left);
                }
                if (cur->right) {
                    que.push(cur->right);
                }
            }
        }
        return ans;
    }
};
