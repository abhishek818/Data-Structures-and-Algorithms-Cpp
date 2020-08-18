https://leetcode.com/problems/kth-largest-element-in-an-array/
leetcode handle: abhishek818

class Solution {
public:
    
    int partition(vector<int>& nums,int l,int h)
    {
        int pivot=l;
        int i=l,j=h;
        while(i<j)
        {
           while(i<=j && nums[i]<=nums[pivot])
               i++;
           while(i<=j && nums[j]>nums[pivot])
               j--;
            
            if(i>j)
            break;
            
            swap(nums[i],nums[j]);
        }
        
        swap(nums[pivot],nums[j]);
        return j;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        k=nums.size()-k;
        int l=0,h=nums.size()-1;
        int res;
        while(l<=h)
        {
            res=partition(nums,l,h);
            if(res==k)
                return nums[res];
            else if(res>k)
                h=res-1;
            else
                l=res+1;
        }
        return -1;
    }
};