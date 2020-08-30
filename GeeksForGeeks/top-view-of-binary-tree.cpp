handle:abhishek818
https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

void topView(struct Node *root)
{
   if(!root)
   return;
   
   queue<pair<Node *,int>> q;
   map<int,int> mp;
   
   q.push(make_pair(root,0));
   Node *front; int hd;
   
   while(!q.empty())
   {
       front=q.front().first;
       hd=q.front().second;
       
       if(mp[hd]==0)
       mp[hd]=front->data;
       
       q.pop();
       
       if(front->left)
       q.push(make_pair(front->left,hd-1));
           
       if(front->right)
       q.push(make_pair(front->right,hd+1));
   }
   
   for(auto it:mp)
   cout<<it.second<<" ";
}


