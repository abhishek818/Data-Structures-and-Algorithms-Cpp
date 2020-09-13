Question Link: https://leetcode.com/problems/implement-strstr/
username: abhishek818

class Solution {
public:
    vector<int> calculateLPS(string& needle)
    {
        int n=needle.length();
        vector<int> lps(n,0);
        
        int index=0;
        
        for(int i=1;i<n;)
        {
            if(needle[i]==needle[index])
            {
                lps[i]=index+1;
                ++i;
                ++index;
            }
            else
            {
                if(index==0)
                ++i;
                
                else
                index=lps[index-1];   
            }
        }
        return lps;
    }
    
    int strStr(string haystack, string needle) {
        if(needle=="")
        return 0;
        
        vector<int> lps = calculateLPS(needle);
        int i=0, j=0, m=haystack.length(), n=needle.length();
        
        while(i<m && j<n)
        {
            if(haystack[i]==needle[j])
            {
                ++i;
                ++j;
            }
            else
            {
                if(j!=0)
                j=lps[j-1];
                
                else
                ++i;
            }
         
         if(j==n)
         return i-n;
        }
    
        return -1;
    }
};