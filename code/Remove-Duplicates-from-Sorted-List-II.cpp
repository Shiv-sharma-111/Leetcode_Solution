class Solution {
public:
ListNode* deleteDuplicates(ListNode* head) {

    ListNode* sentinel = new ListNode(0);
    
    sentinel->next = head;
    
    ListNode* zero = sentinel;
    
    while(zero->next != NULL && zero->next->next != NULL)
    {
        if(zero->next->val == zero->next->next->val)
        {
            int duplicate = zero->next->val;
            while(zero->next != NULL && zero->next->val == duplicate)
            {
                zero->next = zero->next->next;
            }
        }
        else
        {
            zero = zero->next;
        }
    }
    return sentinel->next;
}

};
