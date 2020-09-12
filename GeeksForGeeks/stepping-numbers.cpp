handle: abhishek818
https://practice.geeksforgeeks.org/problems/stepping-numberswrong-output/0

#include<bits/stdc++.h>
using namespace std;

queue<int> q;
void bfs(int m,int n,int i,int& count)
{
    q.push(i);
    
    int front,a,b,lastDigit;
    while(!q.empty())
    {
       front=q.front();
       q.pop();
       
       if(front>=m && front<=n)
       ++count;
       
       if(i==0 || i>n)
       continue;
       
       lastDigit=front%10;
       
       a=front*10+(lastDigit-1);
       b=front*10+(lastDigit+1);
       
       if(a>n)
       continue;
       
       if(lastDigit==0)
       q.push(b);
       
       else if(lastDigit==9)
       q.push(a);
      
       else
       {
           q.push(a);
           q.push(b);
       }
    }
}

int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int count=0;
	    
	    int m,n;
	    cin>>m>>n;
	    
	    for(int i=0;i<=9;i++)
	    bfs(m,n,i,count);
	    
	    cout<<count<<'\n';
	}
	return 0;
}
