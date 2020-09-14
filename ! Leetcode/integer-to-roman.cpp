Question Link: https://leetcode.com/problems/integer-to-roman/solution/
username: abhishek818

class Solution {
public:
    
string intToRoman(int num) {
    string ans="";
     
    string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
      
    int index=0;
    while(num>0)
    {
        while(num>=val[index])
        {
            ans+=sym[index];
            num-=val[index];
        }
        ++index;
    }
    
     return ans;
    }
};