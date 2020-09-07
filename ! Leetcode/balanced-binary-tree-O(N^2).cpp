Question Link: https://leetcode.com/problems/balanced-binary-tree/
username: abhishek818

class Solution {
public:
    int height(TreeNode* root)
    {
        return !root?0:1+max(height(root->left),height(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
      if(!root)
      return 1;
      
      int left=height(root->left);
      int right=height(root->right);
        
      return abs(left-right)<=1 && isBalanced(root->left) && isBalanced(root->right);  
    }
};