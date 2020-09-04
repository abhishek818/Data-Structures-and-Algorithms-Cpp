Question Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
username: abhishek818

class Solution {
public:
    vector<int> ans;
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root)
        return ans;
        
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        ans.push_back(root->val);
        
        return ans;
    }
};