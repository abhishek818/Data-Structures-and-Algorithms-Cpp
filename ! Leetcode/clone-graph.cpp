Question Link: https://leetcode.com/problems/clone-graph/
username: abhishek818

class Solution {
public:
    void dfs(Node* cur,Node* newNode,vector<Node *>& vis)
    {
        vis[newNode->val]=newNode;
        for(auto cur2:cur->neighbors)
        {
            if(!vis[cur2->val])
            {
              Node *node=new Node(cur2->val);
              newNode->neighbors.push_back(node);
              dfs(cur2,node,vis);
            }
            else
              newNode->neighbors.push_back(vis[cur2->val]);
        }
    }

    Node* cloneGraph(Node* node) {
       if(!node)
       return node;
        
       vector<Node *> vis(101,NULL);
       Node* copy=new Node(node->val);
       vis[node->val]=copy;
        
       for(auto cur:node->neighbors)
       {
        if(!vis[cur->val])
        {
            Node *newNode=new Node(cur->val);
            copy->neighbors.push_back(newNode);
            dfs(cur,newNode,vis);
        }
           else
           copy->neighbors.push_back(vis[cur->val]);
       }
        
      return copy;
    }
};