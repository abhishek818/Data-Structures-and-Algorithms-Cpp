https://leetcode.com/problems/4sum/
leetcode handle: abhishek818

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<4)
            return ans;
        
        sort(nums.begin(),nums.end());
        int rem,low,high,index=0;
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i==0 || nums[i]!=nums[i-1])
            {
            for(int j=i+1;j<nums.size()-2;j++)
            {
            if(j==i+1 || nums[j]!=nums[j-1])
            {    
            rem=target-nums[i]-nums[j];
            low=j+1;
            high=nums.size()-1;
            
            while(low<high)
            {
                if(nums[low]+nums[high]==rem)
                {
                   ans.resize(index+1);
                   ans[index].push_back(nums[i]);
                   ans[index].push_back(nums[j]);
                   ans[index].push_back(nums[low]);
                   ans[index++].push_back(nums[high]);
                   
                   while(low<high && nums[low]==nums[low+1])
                   ++low;
                   while(low<high && nums[high]==nums[high-1])
                   --high;
                   ++low;
                   --high;
                }
                else if(nums[low]+nums[high]>rem)
                    --high;
                else
                    ++low;
            }
             }
            } }
        }
        return ans;
    }
};