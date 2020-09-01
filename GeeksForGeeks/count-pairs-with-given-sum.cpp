handle:abhishek818
https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum/0

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    map<int,int> mp;
	    
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        if(mp[sum-a[i]]>0)
	        {
	            ans+=mp[sum-a[i]];
	        }
	        ++mp[a[i]];
	    }
	    cout<<ans<<'\n';
	}
	return 0;
}