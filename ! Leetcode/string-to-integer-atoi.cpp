Question Link: https://leetcode.com/problems/string-to-integer-atoi/
username: abhishek818

class Solution {
public:
    int myAtoi(string str) {
        if(str=="")
        return 0;
        
        int ans=0;
        int i=0,sign=1;
        
        for(; isspace(str[i]); i++);
        
        if(str[i]=='+' || str[i]=='-')
           sign = str[i++]=='-' ? -1:1;
           
        for(; isdigit(str[i]); i++)
        {
            if(ans>INT_MAX/10 || ans==INT_MAX/10 && str[i]-'0'>INT_MAX%10)
            return sign==1 ? INT_MAX:INT_MIN;
            
            else
            ans=ans*10 + (str[i]-'0');
        }
           
        return ans*sign;
    }
};