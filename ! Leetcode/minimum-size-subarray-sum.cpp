Question Link: https://leetcode.com/problems/minimum-size-subarray-sum/
username: abhishek818

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int ans=INT_MAX,sum=0,start=0;
        
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
           while(sum>=s)
           {
               ans=min(ans,i+1-start);
               sum-=nums[start++]; 
           }
        }
        
        return ans==INT_MAX ? 0:ans;
    }
};