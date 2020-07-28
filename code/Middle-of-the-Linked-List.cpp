class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast, *slow;
        fast = slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
