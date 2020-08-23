Question Link: https://leetcode.com/problems/search-a-2d-matrix-ii/
username: abhishek818

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return 0;
        int r=0,c=matrix[0].size()-1;
        
        while(r<matrix.size() && c>=0)
        {
            if(matrix[r][c]==target)
                return 1;
            else if(matrix[r][c]>target)
                --c;
            else
                ++r;
        }
        return 0;
    }
};