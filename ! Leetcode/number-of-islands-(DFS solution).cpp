https://leetcode.com/problems/number-of-islands/
username: abhishek818

class Solution {
public:
    int DFS(vector<vector<char>>& grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]=='0')
            return 0;
        
        grid[i][j]='0';
        
        DFS(grid,i-1,j);
        DFS(grid,i,j-1);
        DFS(grid,i+1,j);
        DFS(grid,i,j+1);
        
        return 1;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                    ans+=DFS(grid,i,j);
            }
        }
        return ans;
    }
};