Question Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
username: abhishek818

class Solution {
public:
    TreeNode* helper(int preStart,int inStart,int inEnd,vector<int>& preorder,vector<int>& inorder, map<int,int>& mp)
    {
        if(preStart>preorder.size()-1 || inStart>inEnd)
            return NULL;
            
        TreeNode* root=new TreeNode(preorder[preStart]);
        int inIdx=mp[root->val];
        
        root->left=helper(preStart+1,inStart,inIdx-1,preorder,inorder,mp);
        root->right=helper(preStart+inIdx-inStart+1,inIdx+1,inEnd,preorder,inorder,mp);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
        mp[inorder[i]]=i;
        return helper(0,0,inorder.size()-1,preorder,inorder,mp);
    }
};