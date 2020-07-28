class Solution {
public:
     ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* next=NULL;
        ListNode* temp=head;
        int l=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            l++;
        }
        int r;
        if(k<=l)
        {
            r=l-k;
        }
        if(k>l)
        {
            r=l-(k%l);
        }
        
        for(int i=0;i<r;i++)
        {
            next=head->next;
            temp->next=head;
            head->next=NULL;
            head=next;
            temp=temp->next;
        }
        return head;
    }
};
