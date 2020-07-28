Question Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
username: abhishek818

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1;
        vector<int> ans;
        for(auto i:nums1)
            ++m1[i];
        for(auto i:nums2)
        {
            if(m1[i]>0)
            {
                ans.push_back(i);
                --m1[i];
            }
        }
        return ans;
    }
};