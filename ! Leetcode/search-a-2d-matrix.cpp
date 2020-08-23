Question Link: https://leetcode.com/problems/search-a-2d-matrix/
username: abhishek818

class Solution {

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return 0;
        
        int col=matrix[0].size();
        
        int l=0,h=matrix.size()*col-1,mid,matrixMid;
        
        while(l<=h)
        {
            mid=l+(h-l)/2;
            matrixMid=matrix[mid/col][mid%col];
            
            if(matrixMid==target)
                return 1;
            else if(matrixMid>target)
                h=mid-1;
            else
                l=mid+1;
        }
        return 0;
    }
}; 