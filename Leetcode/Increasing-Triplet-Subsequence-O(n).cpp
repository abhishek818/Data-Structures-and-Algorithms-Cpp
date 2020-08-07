https://leetcode.com/problems/increasing-triplet-subsequence/
username: abhishek818

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
        return 0;
        
        int left=INT_MAX,mid=left,right=left;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>mid)
                return true;
            else if(nums[i]>left && nums[i]<right)
                mid=nums[i];
            else
                left=nums[i];
        }
        return 0;
    }
};