Question Link: https://leetcode.com/problems/validate-ip-address/
username: abhishek818

class Solution {
public:
    string validIPAddress(string IP) {
       int flag=-1,n=IP.length();
        
       for(int i=1;i<n;i++)
           if(IP[i]=='.')
           {
               flag=1;
               break;
           }
           else if(IP[i]==':')
           {
               flag=0;
               break;
           }
        
        string ans="Neither";
        if(flag==-1)
        return ans;
        
        string check="";
        int count=0,temp=0;
        
        if(flag)
        {
            for(int i=0;i<n;i++)
            {
                if(i>0 && IP[i]=='.' && IP[i-1]=='.')
                return ans;
                
                else if(check.length()>3)
                return ans;    
                
                else if(isalpha(IP[i]))
                return ans;    
    
                else if(IP[i]=='.')
                {
                    temp=stoi(check);
                    ++count;
                    
                    if(count>3 || temp<0 || temp>255 || (check.length()>1 && check[0]=='0'))
                    return ans;
    
                    check="";
                }
        
                else
                check+=IP[i];
            }
            
            if(check.length()>3 || count<3 || check=="")
            return ans;
            
            temp=stoi(check);
            if(temp<0 || temp>255 || (check.length()>1 && check[0]=='0'))
            return ans;    
            
            return "IPv4";
        }
        
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i>0 && IP[i]==':' && IP[i-1]==':')
                return ans;
                
                else if(check.length()>4)
                return ans;    
                
                else if(IP[i]==':')
                {   
                    if(++count>7)
                    return ans;
                    
                    check="";
                }
                
                else if(isalpha(IP[i]) && toupper(IP[i])>'F')
                    return ans;
                
                else
                check+=IP[i];
            }
            
            if(check.length()>4 || check=="")
            return ans;
            
            return "IPv6";
        }
        
        return ans;
    }
};