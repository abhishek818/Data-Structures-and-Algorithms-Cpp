Question Link: https://leetcode.com/problems/word-break/
username: abhishek818

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.length();
        bool dp[n][n];
        
        memset(dp,0,sizeof(dp));
        
        int j;
        for(int l=1;l<=n;l++)
        {
            for(int i=0;i<n-l+1;i++)
            {
                j=i+l-1;
            
                if(find(wordDict.begin(), wordDict.end(), s.substr(i,l))!=wordDict.end())
                {
                    dp[i][j]=1;
                    continue;
                }
                
                for(int k=i+1;k<=j;k++)
                    if(dp[i][k-1] && dp[k][j])
                    {
                       dp[i][j]=1;
                       break;
                    }   
            }
        }
        
        return dp[0][n-1];
    }
};