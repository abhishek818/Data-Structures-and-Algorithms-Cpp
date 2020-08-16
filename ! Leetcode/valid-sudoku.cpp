https://leetcode.com/problems/valid-sudoku/
username: abhishek818

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       set<string> s;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
              if(board[i][j]!='.' && s.find(to_string(board[i][j])+" found in row "+to_string(i))!=s.end() || 
                  s.find(to_string(board[i][j])+" found in coloumn "+to_string(j))!=s.end() || 
                   s.find(to_string(board[i][j])+" found in box "+to_string(i/3)+to_string(j/3))!=s.end())
                    return 0;
                else if(board[i][j]!='.')
                {
                    s.insert(to_string(board[i][j])+" found in row "+to_string(i));
                    s.insert(to_string(board[i][j])+" found in coloumn "+to_string(j));
                    s.insert(to_string(board[i][j])+" found in box "+to_string(i/3)+to_string(j/3));
                }
            }
        }
        return 1;
    }
};