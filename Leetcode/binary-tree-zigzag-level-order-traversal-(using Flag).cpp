Question Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
username: abhishek818

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
        return ans;
        
        queue<TreeNode *> q;
        q.push(root);
        
        int flag=0,size;
        TreeNode *front;
        
        while(!q.empty())
        {
            size=q.size();
            vector<int> temp;
            while(size--)
            {
                front=q.front();
                temp.push_back(front->val);
                q.pop();
                if(front->left)
                q.push(front->left);
                if(front->right)
                q.push(front->right);
            }
            if(flag==1)
            reverse(temp.begin(),temp.end());
            flag=flag==1?0:1;
            ans.push_back(temp);
        }
        return ans;
    }
};