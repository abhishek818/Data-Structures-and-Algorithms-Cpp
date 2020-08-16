https://leetcode.com/problems/remove-nth-node-from-end-of-list/
username: abhishek818

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode *fast=head,*slow=head;
     while(n--)
     fast=fast->next;
		 
        if(!fast)
        {
            head=head->next;
            return head;                
        }
        while(fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
         slow->next=slow->next->next;
        return head;
    }
};