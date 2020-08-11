https://leetcode.com/problems/letter-combinations-of-a-phone-number/
username: abhishek818

class Solution {
public:
    void recursive(string digits,vector<string>& res,string storage[],string cur,int index)
    {
        if(index==digits.length())
        {
            res.push_back(cur);
            return;
        }
        
        string letters=storage[digits[index]-'0'];
        for(int i=0;i<letters.length();i++)
            recursive(digits,res,storage,cur+letters[i],index+1);
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        int n=digits.length();
        
        if(n==0)
        return res;
        
        string storage[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        recursive(digits,res,storage,"",0);
        return res;
    }
};