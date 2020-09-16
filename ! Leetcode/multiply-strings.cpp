Question Link: https://leetcode.com/problems/multiply-strings/
username: abhishek818

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
        return "0";
        
        int m=num1.size(), n=num2.size();
        int res[m+n];
        memset(res, 0, sizeof(res));
        
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                res[i+j+1]+= (num1[i]-'0')*(num2[j]-'0');
                res[i+j]+= res[i+j+1]/10;
                res[i+j+1]%=10;
            }
        }
         
        string ans="";
        int i=0;
        
        while(res[i]==0)
        ++i;
        
        for(int c=i;c<m+n;c++)
        ans+=(res[c]+'0');
            
        return ans;
    }
};