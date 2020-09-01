https://leetcode.com/problems/largest-time-for-given-digits/
leetcode handle: abhishek818

class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(A.begin(),A.end());
        
        string ans="";
        string s="";
        
        for(int i:A)
        s+=to_string(i);
        
        string hr,min;
        int h,m;
        do
        {
            hr=s.substr(0,2);
            min=s.substr(2,2);
            h=stoi(hr);
            m=stoi(min);
            
            if(h>=0 && h<=23 && m>=0 && m<=59)
                ans=max(ans,hr+':'+min);
            
        } while(next_permutation(s.begin(),s.end()));
        
        return ans;
    }
};