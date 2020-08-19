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
        vector<int> cur;
        cur=intervals[0];
        
        for(int i=1;i<intervals.size();i++)
        {
            if(cur[1]>=intervals[i][0])
            cur[1]=max(cur[1],intervals[i][1]);
            else
            {
                ans.push_back(cur);
                cur=intervals[i];
            }
        }
        
        if(ans.empty())
        ans.push_back(cur);
        else if(cur!=ans[ans.size()-1])
        ans.push_back(cur);
        
        return ans;
    }
};