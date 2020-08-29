Question Link: https://leetcode.com/problems/word-break/
username: abhishek818

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        
        bool dp[n+1];
        memset(dp,0,n+1);
        
        dp[0]=1; int end;
        
        for(int start=0;start<n;start++)
        {
            if(!dp[start])
                continue;
            
            for(string word:wordDict)
            {
                end=start+word.length();
                if(s.substr(start,word.length())==word)
                    dp[end]=1;
            }
        }
        
        return dp[n];
    }
};