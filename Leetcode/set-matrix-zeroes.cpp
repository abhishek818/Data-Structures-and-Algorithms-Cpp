https://leetcode.com/problems/set-matrix-zeroes/submissions/
Leetcode_handle: abhishek818

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int firstCol=0,firstRow=0;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    if(j==0)
                        firstCol=1;
                    if(i==0)
                        firstRow=1;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
         for(int i=1;i<matrix.size();i++)
         {
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
         }
         if(firstRow)
        {
            for(int i=0;i<matrix[0].size();i++)
                matrix[0][i]=0;
        }
        if(firstCol)
        {
            for(int i=0;i<matrix.size();i++)
                matrix[i][0]=0;
        }
    }
};