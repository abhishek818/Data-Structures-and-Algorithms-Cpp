https://leetcode.com/problems/group-anagrams/
username: abhishek818

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> ans;
        if(strs.size()==0)
            return ans;
        map<string, vector<string>> mp;
        string sorted;
        for(int i=0;i<strs.size();i++)
        {
            sorted=strs[i];
            sort(sorted.begin(),sorted.end());
            mp[sorted].push_back(strs[i]);
        }
        
        ans.resize(mp.size());
        int start=0;
        for(auto it:mp)
        {
            for(auto j:it.second)
                ans[start].push_back(j);
            ++start;
        }
        return ans;
    }
};