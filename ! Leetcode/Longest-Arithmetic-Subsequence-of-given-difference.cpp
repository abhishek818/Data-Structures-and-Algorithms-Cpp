https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/
username: abhishek818

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        map<int,int> mp;
        int ans=1;
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]-d]>0)
              mp[arr[i]]=mp[arr[i]-d]+1;
            else if(mp[arr[i]]>0)
              continue;
            else
            mp[arr[i]]=1;
            
            ans=max(ans,mp[arr[i]]);
        }
      
        return ans;
    }
};