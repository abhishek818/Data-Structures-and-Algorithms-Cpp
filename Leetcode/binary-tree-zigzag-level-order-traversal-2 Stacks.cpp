Question Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
username: abhishek818

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
        return ans;
        
        stack<TreeNode *> s1,s2;
        s1.push(root);
        
        TreeNode *top;
        
        while(!s1.empty() || !s2.empty())
        {    
         vector<int> temp1,temp2;   
        while(!s1.empty())
        {
            top=s1.top();
            s1.pop();
            temp1.push_back(top->val);
            if(top->left)
            s2.push(top->left);
            if(top->right)
            s2.push(top->right);
        }
        if(!temp1.empty())    
        ans.push_back(temp1);
     
        while(!s2.empty())
        {
            top=s2.top();
            s2.pop();
            temp2.push_back(top->val);
            if(top->right)
            s1.push(top->right);
            if(top->left)
            s1.push(top->left);
        }
        if(!temp2.empty())    
        ans.push_back(temp2);        
        
        }
        
        return ans;
    }
};