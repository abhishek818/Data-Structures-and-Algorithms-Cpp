https://leetcode.com/problems/two-sum/
username: abhishek818

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[target-nums[i]]>0)
            {
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]-1);
                return ans;
            }
            mp[nums[i]]=i+1;
        }
        return ans;
    }
};