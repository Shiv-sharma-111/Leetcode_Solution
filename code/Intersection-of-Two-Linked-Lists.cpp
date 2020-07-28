class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
	   ListNode* tempA { headA }, *tempB {headB};
        int cntA{0}, cntB{0};
        
        while(tempA && tempB ) {
            
            if(tempA == tempB) return tempA;
            tempA = (!tempA->next && cntA++ < 1) ? headB : tempA->next;
            tempB = (!tempB->next && cntB++ < 1) ? headA : tempB->next;
        
        }
        return nullptr;
        
    }
};
