Question Link: https://leetcode.com/problems/maximum-subarray/
username: abhishek818

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=nums[0], ans=cur;
            
        for(int i=1;i<nums.size();i++)
        {
           cur=max(cur+nums[i],nums[i]);
           ans=max(ans,cur); 
        }
        return ans;
    }
};