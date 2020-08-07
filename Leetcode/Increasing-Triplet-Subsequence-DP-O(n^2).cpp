https://leetcode.com/problems/increasing-triplet-subsequence/
username: abhishek818

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
        return 0;
        
        int dp[n];
        // memset(dp,1,sizeof(dp)); only 0 or -1
        for(int i=0;i<n;i++)
            dp[i]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                    dp[i]=max(dp[i],dp[j]+1);
                
                if(dp[i]>=3)
                    return 1;
            }
        }
        return 0;
    }
};