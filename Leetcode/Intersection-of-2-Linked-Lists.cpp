Question Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
username: abhishek818

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        
        int l1=0,l2=0;
        ListNode *temp1=headA,*temp2=headB;
        while(temp1!=NULL)
        {
            ++l1;
            temp1=temp1->next;
        }    
        while(temp2!=NULL)
        {
            ++l2;
            temp2=temp2->next;
        }
        
        int diff = abs(l1-l2);
        
        if(l1>l2)
        {
            while(diff--)
                headA=headA->next;
        }
        else
        {
             while(diff--)
                headB=headB->next;
        }

        while(headA!=NULL && headB!=NULL)
        {
            if(headA==headB)
            {
                return headA;
                break;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};