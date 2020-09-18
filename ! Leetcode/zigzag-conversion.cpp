Question Link: https://leetcode.com/problems/zigzag-conversion/
username: abhishek818

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1)
        return s;
        
        string str[numRows];
        int row=0,step=1;
        
        for(char c:s)
        {
            str[row]+=c;
            
            if(row==0)
            step=1;
            
            else if(row==numRows-1)
            step=-1;
            
            row+=step;
        }
        
        s="";
        
        for(string letters:str)
        s+=letters;
        
        return s;
    }
};