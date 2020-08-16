Question Link: https://leetcode.com/problems/merge-two-sorted-lists/
username: abhishek818

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2)
            return l1;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        ListNode *merged,*pointer=new ListNode(0);
        
        merged=pointer;
        
        while(l1 && l2)
        {
            if(l1->val<=l2->val)
            {
                pointer->next=l1;
                l1=l1->next;
            }
         else
            {
                pointer->next=l2;
                l2=l2->next;
            }
            pointer=pointer->next;
        }
        
            pointer->next=l1?l1:l2;
        
        return merged->next;
    }
};