Question Link: https://leetcode.com/problems/recover-binary-search-tree/
username: abhishek818

class Solution {
public:
    TreeNode *prev=NULL,*fir=NULL,*sec=NULL;
    
    void inorder(TreeNode* root)
    {
        if(!root)
        return;
        
        inorder(root->left);
        
        if(prev && !fir && prev->val>root->val)
        fir=prev;
        if(fir && prev && prev->val>root->val)
        sec=root;
        
        prev=root;
        
        inorder(root->right);
    }
    
    void recoverTree(TreeNode* root) {
       if(!root)
       return;

       inorder(root);
       
       swap(fir->val,sec->val); 
    }
};