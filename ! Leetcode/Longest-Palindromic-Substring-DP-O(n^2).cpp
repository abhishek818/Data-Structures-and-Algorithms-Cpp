Question Link: https://leetcode.com/problems/longest-palindromic-substring/
username: abhishek818

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==0)
            return "";
        
        bool dp[n][n];
        int max=1,start=0;
        
        for(int i=0;i<n;i++)
            dp[i][i]=1;
        
        for(int i=0;i<n-1;i++)
        { 
          if(s[i]==s[i+1])
          {
              dp[i][i+1]=1;
              max=2;
              start=i;
          }
          else
              dp[i][i+1]=0;
        }
        
        int k;
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<=n-i;j++)
            {
                k=j+i-1;
                if(s[j]==s[k] && dp[j+1][k-1])
                {
                    dp[j][k]=1;
                    max=i;
                    start=j;
                }
                else
                    dp[j][k]=0;
            }
        }
        
        return s.substr(start,max);
    }
};