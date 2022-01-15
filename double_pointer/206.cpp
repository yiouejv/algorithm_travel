/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode *dummy = new ListNode();
        dummy->next = head;

        ListNode *pre = dummy;
        ListNode *cur = head;
        ListNode *nxt = head->next;

        while (nxt) {
            cur->next = pre;
            pre = cur;

            ListNode *tmp = nxt->next;

            nxt->next = cur;
            cur = nxt;

            nxt = tmp;
        }
        head->next = nullptr;
        delete dummy;
        return cur;
    }
};
