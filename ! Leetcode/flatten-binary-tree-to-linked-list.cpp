https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
leetcode handle: abhishek818

class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root)
        return;
        
        flatten(root->left);
        flatten(root->right);
        
        TreeNode *l=root->left;
        TreeNode *r=root->right;
       
        root->right=l;
        
        TreeNode *temp=root;
        while(temp->right)
        temp=temp->right;
        
        temp->right=r;
        root->left=NULL;
    }
};