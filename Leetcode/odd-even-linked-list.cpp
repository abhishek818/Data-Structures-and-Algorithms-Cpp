Question Link: https://leetcode.com/problems/odd-even-linked-list/
username: abhishek818

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
       if(!head)
       return head;
        
       ListNode *odd=head,*even=head->next,*evenHead=even;
       
       while(even && even->next)
       {
           odd->next=even->next;
           odd=odd->next;
           even->next=odd->next;
           even=even->next;
       }
        odd->next=evenHead;
        return head;
    }
};