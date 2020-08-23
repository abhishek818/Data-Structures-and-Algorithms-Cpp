Question Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
username: abhishek818

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int ans=0;
      for(int i=0;i<prices.size()-1;i++)
      {
            if(prices[i+1]>prices[i])
                ans+=prices[i+1]-prices[i];
      }
        return ans;
    }
};