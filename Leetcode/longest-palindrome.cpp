Question Link: https://leetcode.com/problems/longest-palindrome/
username: abhishek818

class Solution {
public:
    int longestPalindrome(string s) {
  
        map<char,int> mp;
        for(char c:s)
        ++mp[c];
        
        int ans=0,flag=0,flag2=0;
        for(auto it:mp)
        {
          if(it.second==1)
          flag=1;
         
          else if(it.second%2==0)
          ans+=it.second;
          
          else
          {
           ans+=it.second-1;
           flag2=1;
          }
        }    
        
        if(!flag)
        ans+=flag2;
        else
        ++ans;    
        
        return ans;
    }
};