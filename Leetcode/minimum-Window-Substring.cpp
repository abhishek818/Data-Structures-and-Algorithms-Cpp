Question Link: https://leetcode.com/problems/minimum-window-substring/submissions/
username: abhishek818

class Solution {
public:
    string minWindow(string s, string t) {
        int start=0,finalStart=0,min=INT_MAX,count=0;
        map<int,int> mp;
        for(char c:t)
            ++mp[c];
        
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]>0)
                ++count;
            --mp[s[i]];
            
            if(count==t.length())
            {
                while(start<i && mp[s[start]]<0)
                    ++mp[s[start++]];
                  
                if(i-start+1<min)
                {
                    min=i-start+1;
                    finalStart=start;
                }
                --count;
                ++mp[s[start++]];
            }
        }
        return min==INT_MAX?"":s.substr(finalStart,min);
    }
};