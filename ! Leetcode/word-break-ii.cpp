Question Link: https://leetcode.com/problems/word-break-ii/
username: abhishek818

class Solution {
    unordered_map<string,vector<string>> dp;
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        if(dp.find(s)!=dp.end())
            return dp[s];
        
        vector<string> ans;
        
        for(string word:wordDict)
        {
            if(s.substr(0,word.length())==word)
            {
                if(s.length()==word.length())
                    ans.push_back(word);
                else
                {
                    vector<string> temp=wordBreak(s.substr(word.length()), wordDict);
                    for(string s:temp)
                    ans.push_back(word+" "+s);
                }
            }
        }
        dp[s]=ans;
        return ans;
    }
};