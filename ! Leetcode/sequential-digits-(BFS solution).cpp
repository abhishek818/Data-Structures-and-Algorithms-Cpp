Question Link: https://leetcode.com/problems/sequential-digits/
username: abhishek818

class Solution {
public:
    void bfs(int i,int low,int high,set<int>& s)
    {
            if(i%10==9)
            return;
            
            i=i*10+(i%10+1);
            if(i>high)
            return;
    
            if(i>=low && i<=high)
            s.insert(i);
            
            bfs(i,low,high,s);
    }
    
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        set<int> s;
        
        for(int i=1;i<9;i++)
        bfs(i,low,high,s);
        
        for(int i:s)
        ans.push_back(i);
        
        return ans;
    }
};