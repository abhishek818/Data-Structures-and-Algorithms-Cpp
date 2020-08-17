https://leetcode.com/problems/first-bad-version/
leetcode handle: abhishek818

class Solution {
public:
    int firstBadVersion(int n) {
      int left=1,right=n,mid;
        while(left<right)
        {
            mid=left+(right-left)/2;
            if(!isBadVersion(mid))
                left=mid+1;
            else
                right=mid;
        }
        return left;
    }
};