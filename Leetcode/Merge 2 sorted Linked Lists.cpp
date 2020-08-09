Question Link: https://leetcode.com/problems/merge-two-sorted-lists/
username: abhishek818

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2)
            return l1;
        if(!l1 && l2)
            return l2;
        if(l1 && !l2)
            return l1;
        
        ListNode *head1=l1,*head2=l2,*merged,*pointer;
        
        if(head1->val<=head2->val)
            {
                pointer=head1;
                head1=head1->next;
            }
         else
            {
               pointer=head2;
               head2=head2->next;
            }
        
        merged=pointer;
        
        while(head1 && head2)
        {
            if(head1->val<=head2->val)
            {
                pointer->next=head1;
                pointer=pointer->next;
                head1=head1->next;
            }
         else
            {
                pointer->next=head2;
                pointer=pointer->next;
                head2=head2->next;
            }
        }
        
        if(head1)
            pointer->next=head1;
        if(head2)
            pointer->next=head2;
        
        return merged;
    }
};