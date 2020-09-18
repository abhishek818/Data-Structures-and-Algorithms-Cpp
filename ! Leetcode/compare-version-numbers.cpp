Question Link: https://leetcode.com/problems/compare-version-numbers/
username: abhishek818

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1=0,v2=0;
        int i=0,j=0;
        
        while(i<version1.length() || j<version2.length())
        {
            for(;i<version1.length() && version1[i]!='.';i++)
            v1=v1*10+(version1[i]-'0');
            
            for(;j<version2.length() && version2[j]!='.';j++)
            v2=v2*10+(version2[j]-'0');
            
            if(v1>v2)
            return 1;
            
            else if(v1<v2)
            return -1;
            
            v1=0,v2=0;
            ++i,++j;
        }
        
        return 0;
    }
};