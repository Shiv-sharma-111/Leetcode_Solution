class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow , *fast;
        slow = fast = head;
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        while(fast!=NULL && fast->next!= NULL )
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
            {
                break;
            }
        }
        if(slow!=fast)
        {
            return NULL;
        }
        
        slow = head;
        while(slow!=fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
