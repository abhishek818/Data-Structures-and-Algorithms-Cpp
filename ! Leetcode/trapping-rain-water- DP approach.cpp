Question Link: https://leetcode.com/problems/trapping-rain-water/
username: abhishek818

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3)
        return 0;
        
        int Lmax[n],Rmax[n];
        
        Lmax[0]=height[0];
        for(int i=1;i<n;i++)
        Lmax[i]=max(height[i],Lmax[i-1]);
        
        Rmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        Rmax[i]=max(height[i],Rmax[i+1]);
        
        int ans=0;
        for(int i=1;i<n-1;i++)
        ans+=min(Lmax[i],Rmax[i])-height[i];
        
        return ans;
    }
};