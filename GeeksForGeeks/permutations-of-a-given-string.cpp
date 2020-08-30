handle:abhishek818
https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0

#include<bits/stdc++.h>
using namespace std;

int findSecond(string s,int start)
{
        int second=start; int first=start-1;
        for(int i=start+1;i<s.length();i++)
        {
            if(s[i]<s[second] && s[i]>s[first])
            second=i;
        }
        return second;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int flag=0;
	    sort(s.begin(),s.end());
	 
	    while(!flag)
	    {
	        cout<<s<<" ";
	        int i;
	        for(i=s.length()-2;i>=0;i--)
	        if(s[i]<s[i+1])
	        break;
	        
	        if(i==-1)
	        flag=1;
	        
	        else
	        {
	            int second=findSecond(s,i+1);
	            swap(s[i],s[second]);
	            reverse(s.begin()+i+1,s.end());
	        }
	    }
	    cout<<'\n';
	}
	return 0;
}