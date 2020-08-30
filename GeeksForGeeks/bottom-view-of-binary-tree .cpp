handle:abhishek818
https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

vector <int> bottomView(Node *root)
{
   queue<pair<Node *,int>> q;
   q.push(make_pair(root,0));
   
   vector<int> ans; 
   map<int,int> mp;
   
   Node *front;
   int hd;
   
   while(!q.empty())
   {
        front=q.front().first;
        hd=q.front().second;
        mp[hd]=front->data;
        q.pop();
        
        if(front->left)
        q.push(make_pair(front->left,hd-1));

        if(front->right)
        q.push(make_pair(front->right,hd+1));
   }
   
   for(auto it:mp)
   ans.push_back(it.second);
   
   return ans;
}

