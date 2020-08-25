Question Link: https://leetcode.com/problems/jump-game-ii/
username: abhishek818

class Solution {
public:
    int jump(vector<int>& nums) {
        int far=0,end=0,jumps=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(end==nums.size())
                return jumps;
            far=max(far,i+nums[i]);
            if(i==end)
            {
                ++jumps;
                end=far;
            }
        }
        return jumps;
    }
};