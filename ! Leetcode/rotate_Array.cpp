https://leetcode.com/problems/rotate-array/
username: abhishek818

class Solution {
public:
    void reverse(vector<int>& a,int start,int end)
    {
     while(start<end)
     swap(a[start++],a[--end]);
    }

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-k);
        reverse(nums,n-k,n);
        reverse(nums,0,n);
    }
};