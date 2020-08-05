handle:abhishek818
https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0

#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        int k[n+1][w+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=w;j++)
            {
                if(i==0||j==0)
                k[i][j]=0;
                else if(a[i-1]<=j)
                k[i][j]=max(k[i-1][j],b[i-1]+k[i-1][j-a[i-1]]);
                else
                k[i][j]=k[i-1][j];
            }
        }
        cout<<k[n][w]<<'\n';
    }
    return 0;
}