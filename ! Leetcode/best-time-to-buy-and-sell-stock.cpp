Question Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
username: abhishek818

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,maxP=0;
        
        for(int i:prices)
        {
            if(i<min)
                min=i;
            else
                maxP=max(maxP,i-min);
        }
        return maxP;
    }
};