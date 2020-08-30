handle:abhishek818
https://practice.geeksforgeeks.org/problems/row-with-max-1s/0

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int a[m][n];
	    
	    for(int i=0;i<m;i++)
	        for(int j=0;j<n;j++)
	         cin>>a[i][j];
	         
	    int ans=0,left=n-1;
	    
	    while(left>=0 && a[0][left-1]==1)
	       --left;
	   
	   int dummy=left;
	   
	   for(int i=1;i<m;i++)
	   {
	      while(dummy>=0 && a[i][dummy]==1)
	      --dummy;
	      
	      if(dummy<left)
	      {
	          left=dummy;
	          ans=i;
	      }
	   }
	   
	   cout<<ans<<'\n';
	}
	return 0;
}