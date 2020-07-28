class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp= head;
        while(temp!=NULL)
        {
            len++;
            temp = temp->next;
        }
        if(n==len)
        {
            return head->next;
        }
        else
        {
            int diff = len-n;
            ListNode* prev = NULL;
            ListNode* curr = head;
            for(int i=0;i<diff;i++)
            {
                prev=curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            return head;
        }
        
    }
};
