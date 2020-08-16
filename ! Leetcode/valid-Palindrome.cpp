https://leetcode.com/problems/valid-palindrome/
username: abhishek818

class Solution {
public:
   bool isPalindrome(string s) {
        string s1 ="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                s1 +=tolower(s[i]);
            }
        }
        for(int i=0;i<s1.size()/2;i++){
            if(s1[i] != s1[s1.size() - i-1]){
                return false;
            }
        }
        return true;
    }
};