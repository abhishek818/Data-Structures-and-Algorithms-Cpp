Question Link: https://leetcode.com/problems/trapping-rain-water/
username: abhishek818

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3)
        return 0;
        
        int lmax=height[0],rmax=height[n-1],ans=0;
        
        int i=1,j=n-2;
        
        while(i<=j)
        {
            lmax=max(lmax,height[i]);
            rmax=max(rmax,height[j]);
            
            if(lmax>=rmax)
            {
                ans+=rmax-height[j];
                --j;
            }
            else
            {
                 ans+=lmax-height[i];
                 ++i;
            }
        }
        
        return ans;  
    }
};