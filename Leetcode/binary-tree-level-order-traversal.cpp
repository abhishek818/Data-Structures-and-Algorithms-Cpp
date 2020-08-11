Question Link: https://leetcode.com/problems/binary-tree-level-order-traversal/
username: abhishek818

cclass Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
        return ans;
        
        int start=0;
        queue<TreeNode *> q;
        q.push(root);
        int flag=1,size;
        TreeNode *front;
        
        while(!q.empty())
        {
            size=q.size();
            ans.resize(start+1);
            while(size--)
            {
            front=q.front();
            ans[start].push_back(front->val);
            q.pop();
            if(front->left)
            q.push(front->left);
            if(front->right)
            q.push(front->right);
            }   
            ++start;
        }
        return ans;
    }
};