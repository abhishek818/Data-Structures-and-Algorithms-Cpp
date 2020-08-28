https://leetcode.com/problems/longest-increasing-subsequence/
leetcode handle: abhishek818

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      if(nums.size()==0)
          return 0;

        int n=nums.size();
        int dp[n];
        fill(dp,dp+n,1);
        
        int ans=1;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
             if(nums[i]>nums[j])
              dp[i]=max(dp[i],dp[j]+1);
        
           ans=max(dp[i],ans);
        }
       
        return ans;
    }
};