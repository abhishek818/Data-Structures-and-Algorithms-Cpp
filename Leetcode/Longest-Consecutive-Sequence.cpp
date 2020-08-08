https://leetcode.com/problems/longest-consecutive-sequence/
username: abhishek818

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums)
            ++mp[i];
        
        int ans=0,streak;
        for(auto it:mp)
        {
            if(mp[it.first-1]==0)
            {
                streak=1;
                while(mp[it.first+streak]>0)
                 ++streak; 
                
                ans=max(ans,streak);
            }
        }
        
        return ans;
    }
};