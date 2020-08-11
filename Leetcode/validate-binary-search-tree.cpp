Question Link: https://leetcode.com/problems/validate-binary-search-tree/
username: abhishek818

class Solution {
public:
    bool check(TreeNode* root,TreeNode* min,TreeNode* max)
    {
        if(!root)
        return 1;
        if(min && root->val<=min->val || max && root->val>=max->val)
        return 0;
        
        return check(root->left,min,root) && check(root->right,root,max);
    }
    bool isValidBST(TreeNode* root) {
        return check(root,NULL,NULL);
    }
};