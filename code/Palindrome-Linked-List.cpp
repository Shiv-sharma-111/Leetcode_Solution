class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<int> s;
        while(temp!=NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        while(head!=NULL)
        {
            int i = s.top();
            s.pop();
            if(head->val!=i)
            {
                return false;
            }
            head = head->next;
        }
        return true;
    }
};
