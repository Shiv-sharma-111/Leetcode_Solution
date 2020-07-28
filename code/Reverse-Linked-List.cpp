class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev, *next, *curr;
        prev= NULL;
        curr = next = head;
        while(next!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
