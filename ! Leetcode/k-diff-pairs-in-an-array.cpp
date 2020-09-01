https://leetcode.com/problems/k-diff-pairs-in-an-array/
leetcode handle: abhishek818

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
      if(k<0)
      return 0;
      
      unordered_map<int,int> mp;
      unordered_set<int> s;  
        
      for(int i:nums)
      {
          ++mp[i];
          s.insert(i);
      }    
        
      int ans=0;
      for(int i:s)
      {
          if(k==0)
          {
              if(mp[i]>1)
              ++ans;
          }    
          
          else if(mp[i+k]>0)
          ++ans;
      }
        
      return ans;
    }
};