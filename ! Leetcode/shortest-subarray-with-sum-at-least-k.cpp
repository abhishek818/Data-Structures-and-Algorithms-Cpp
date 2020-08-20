https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/
leetcode handle: abhishek818

class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        int n=A.size();
        if(n==0)
            return -1;
       
        vector<int> prefixSum(n+1,0);
        for(int i=1;i<=n;i++)
        prefixSum[i]=prefixSum[i-1]+A[i-1];
        
        int ans=INT_MAX;
        deque<int> d;
        
        for(int i=0;i<=n;i++)
        {
            while(!d.empty() && prefixSum[i]-prefixSum[d.front()]>=K)
            {
                 ans=min(ans,i-d.front());
                 d.pop_front();
            }   
            while(!d.empty() && prefixSum[i]<=prefixSum[d.back()])
                d.pop_back();
                
            d.push_back(i);    
        }
        return ans==INT_MAX?-1:ans;
    }
};