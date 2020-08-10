Question Link: https://leetcode.com/problems/add-two-numbers/
username: abhishek818

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans,*temp=NULL;
        int carry=0,sum=0;
        
        while(l1||l2)
        {
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum>9?1:0;
            if(!temp)
            {
                temp=new ListNode(sum%10);
                ans=temp;
            }
            else
            {
                temp->next=new ListNode(sum%10);
                temp=temp->next;
            }
            sum=0;
        }
       
        if(carry)
            temp->next=new ListNode(carry);
        return ans;
    }
};