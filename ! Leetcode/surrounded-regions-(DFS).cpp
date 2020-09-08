Question Link: https://leetcode.com/problems/surrounded-regions/
username: abhishek818

class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& board)
    {
        if(i<0 || i>board.size()-1 || j<0 || j>board[0].size()-1)
            return;
        
        board[i][j]='1';
        
        if(i+1<board.size()-1 && board[i+1][j]=='O')
            dfs(i+1,j,board);
        if(i-1>0 && board[i-1][j]=='O')
            dfs(i-1,j,board);
        if(j+1<board[0].size()-1 && board[i][j+1]=='O')
            dfs(i,j+1,board);
        if(j-1>0 && board[i][j-1]=='O')
            dfs(i,j-1,board);
    }
    
    void solve(vector<vector<char>>& board) {
       if(board.size()<=1)
           return;
       
       int row=board.size(),col=board[0].size();
        
       for(int i=0;i<row;i++)
       {
          if(board[i][0]=='O')
              dfs(i,0,board);
          if(board[i][col-1]=='O')
              dfs(i,col-1,board);
       }
        
       for(int i=1;i<col-1;i++)
       {
           if(board[0][i]=='O')
              dfs(0,i,board);
          if(board[row-1][i]=='O')
              dfs(row-1,i,board);
       }
        
       for(int i=0;i<row;i++)
       {
           for(int j=0;j<col;j++)
           {
               if(board[i][j]=='O')
                   board[i][j]='X';
               else if(board[i][j]=='1')
                   board[i][j]='O';
           }
       }
    }
};