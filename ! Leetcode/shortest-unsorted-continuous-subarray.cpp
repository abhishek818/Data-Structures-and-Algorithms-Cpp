Question Link: https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
username: abhishek818

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size(),minS=INT_MAX,maxS=INT_MIN;
        
        for(int i=1;i<n;i++)
            if(nums[i]<nums[i-1])
            minS=min(minS,nums[i]);
      
        for(int i=n-2;i>=0;i--)
            if(nums[i]>nums[i+1])
            maxS=max(maxS,nums[i]);
        
        int start=0,end=0;
        for(int i=0;i<n;i++)
            if(minS<nums[i])
            {
                start=i;
                break;
            }
        
        for(int i=n-1;i>=0;i--)
            if(maxS>nums[i])
            {
                end=i;
                break;
            }
        
        return end-start==0?0:end-start+1;
    }
};