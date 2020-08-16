https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
leetcode handle: abhishek818

class Solution {
public:
    TreeNode* convert(vector<int>& nums,int l,int r)
    {
        if(l>r)
        return NULL;
        int mid=l+(r-l)/2;
        TreeNode *head=new TreeNode(nums[mid]);
        head->left=convert(nums,l,mid-1);
        head->right=convert(nums,mid+1,r);
        return head;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return NULL;
        return convert(nums,0,n-1);
    }
};