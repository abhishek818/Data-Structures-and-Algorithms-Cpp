Question Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
username: abhishek818

class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)
        return ans;
        
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        
        return ans;
    }
};