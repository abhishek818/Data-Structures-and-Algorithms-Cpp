Question Link: https://leetcode.com/problems/coin-change/
username: abhishek818

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int dp[amount+1];
        
        fill(dp, dp+amount+1, amount+1);
        dp[0]=0;
        
        for(int i=1;i<=amount;i++)
            for(int j=0;j<coins.size();j++)
                if(coins[j]<=i)
                    dp[i]=min(dp[i], 1+dp[i-coins[j]]);
                else
                    break;
        
        return dp[amount]==amount+1?-1:dp[amount];
    }
};