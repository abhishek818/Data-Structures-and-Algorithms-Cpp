Question Link: https://leetcode.com/problems/linked-list-cycle/
username: abhishek818

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
            return 0;
        ListNode *fast=head,*slow=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return 1;
        }
        return 0;
    }
};