Question Link: https://leetcode.com/problems/copy-list-with-random-pointer/
username: abhishek818

class Solution {
public:
    Node* copyRandomList(Node* head) {
       if(!head)
           return head;
        Node *origin=head,*copy=new Node(0),*temp=copy,*newNode;
        map<Node *,Node *> mp;
        
        while(origin)
        {
            newNode=new Node(origin->val);   
            temp->next=newNode;
            temp=temp->next;
            
            mp[origin]=temp;
            origin=origin->next;
        }
        
        temp=copy->next;
        while(head)
        {
            if(head->random)
                temp->random=mp[head->random];
            head=head->next;
            temp=temp->next;
        }
        
        return copy->next;
    }
};