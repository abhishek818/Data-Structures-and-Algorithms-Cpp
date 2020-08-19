https://leetcode.com/problems/merge-intervals/
leetcode handle: abhishek818

class Solution {
public:
    
    static bool sortbyFirst(vector<int>& a, vector<int>& b)
    {
        return a[0]<b[0];    
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
            return intervals;
        
        vector<vector<int>> ans;
        
        sort(intervals.begin(),intervals.end(),sortbyFirst);
        ans.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++)
        {
            if(ans.back()[1]<intervals[i][0])
            ans.push_back(intervals[i]);
            
            else
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
        
        return ans;
    }
};