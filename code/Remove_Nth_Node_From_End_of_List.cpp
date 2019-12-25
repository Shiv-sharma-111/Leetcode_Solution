/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* pre = new ListNode(0);
        pre->next = head;
        ListNode* cur = pre;
        int L = 0;
        while (cur){
            L += 1;
            cur = cur->next;
        }
        cur = pre;
        int i = 0;
        while (i < L-n-1){
            cur = cur->next;
            i += 1;
        }
        cur->next = cur->next->next;
        return pre->next;
    }
};
