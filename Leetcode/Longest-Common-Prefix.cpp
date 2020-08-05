https://leetcode.com/problems/longest-common-prefix/
username: abhishek818

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        string prefix=strs[0],copy="";
        
        int match=0;
        for(int i=1;i<strs.size();i++)
        {
            while(prefix[match] && strs[i][match] && prefix[match]==strs[i][match])
                copy+=prefix[match++];
            match=0;
            prefix=copy;
            copy="";
        }
        return prefix;
    }
};