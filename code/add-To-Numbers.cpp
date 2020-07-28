class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        ListNode *cur = new ListNode(l1->val+l2->val, NULL);
        cur->next = addTwoNumbers(l1->next, l2->next);
        if (cur->val >= 10) {
            cur->val -= 10;
            cur->next = addTwoNumbers(cur->next, new ListNode(1, NULL));
        }
        return cur;
    }
};
