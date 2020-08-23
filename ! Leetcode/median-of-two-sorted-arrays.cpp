Question Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
username: abhishek818

cclass Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
            return findMedianSortedArrays(nums2,nums1);
        
        int l1=nums1.size(), l2=nums2.size();
        
        int low=0, high=l1, partitionX, partitionY, maxLeftX, minRightX, maxLeftY, minRightY;
        
        while(low<=high)
        {
            partitionX=low + (high-low)/2;
            partitionY=(l1+l2+1)/2-partitionX;
            
            maxLeftX=partitionX==0 ? INT_MIN:nums1[partitionX-1];
            minRightX=partitionX==l1 ? INT_MAX:nums1[partitionX];
        
            maxLeftY=partitionY==0 ? INT_MIN:nums2[partitionY-1];
            minRightY=partitionY==l2 ? INT_MAX:nums2[partitionY];
            
            if(maxLeftX<=minRightY && maxLeftY<=minRightX)
            {
                if(!(l1+l2 & 1))
                return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2.0;
                
                else
                return max(maxLeftX, maxLeftY);
            }
            
            else if(maxLeftX>minRightY)
            high=partitionX-1;
            
            else
            low=partitionX+1;
        }
        return -1;
    }
};