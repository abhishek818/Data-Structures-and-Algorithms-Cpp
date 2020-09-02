Question Link: https://leetcode.com/problems/word-search/
username: abhishek818

class Solution {
public:
    bool dfs(vector<vector<char>>& board,int i,int j,int index,string word)
    {
        if(index==word.length())
        return 1;
        
        if(i<0 || i>=board.size() || j<0 || j>=board[i].size() || word[index]!=board[i][j])
        return 0;
        
        char temp=board[i][j];
        board[i][j]=' ';
        
        bool found = dfs(board,i,j+1,index+1,word) || dfs(board,i+1,j,index+1,word) ||
                     dfs(board,i-1,j,index+1,word) || dfs(board,i,j-1,index+1,word);
        
        board[i][j]=temp;
        return found;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
       for(int i=0;i<board.size();i++)
       {
           for(int j=0;j<board[i].size();j++)
           {
               if(word[0]==board[i][j] && dfs(board,i,j,0,word))
                   return 1;
           }
       }
        
       return 0;
    }
};