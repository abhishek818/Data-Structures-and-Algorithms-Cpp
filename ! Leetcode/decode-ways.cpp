Question Link: https://leetcode.com/problems/decode-ways/
username: abhishek818

class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        
        dp[0]=1;
        dp[1]=s[0]=='0'?0:1;
        
        for(int i=2;i<=n;i++)
        {
            if(s[i-1]>='1')
            dp[i]+=dp[i-1];
         
            if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6'))
            dp[i]+=dp[i-2];
        }
        
        return dp[n];
    }
};