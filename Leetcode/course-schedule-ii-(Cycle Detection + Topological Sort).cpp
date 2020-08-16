Question Link: https://leetcode.com/problems/course-schedule-ii/
username: abhishek818

class Solution {
public:
    
    bool detectCycle(vector<vector<int>>& adj,int cur,vector<int>& vis)
    {
        if(vis[cur]==1)
            return 1;
        if(vis[cur]==2)
            return 0;
        
        vis[cur]=1;
        
        for(int i=0;i<adj[cur].size();i++)
           if(detectCycle(adj,adj[cur][i],vis))
             return 1;
              
        vis[cur]=2;
              
        return 0;      
    }
              
    void dfs(vector<vector<int>>& adj,int cur,vector<int>& vis,stack<int>& s) 
    {
        vis[cur]=1;
        for(int i=0;i<adj[cur].size();i++)
            if(!vis[adj[cur][i]])
                dfs(adj,adj[cur][i],vis,s);
        
        s.push(cur);
    }          
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
       vector<int> ans;
        
        int n=prerequisites.size();
        vector<vector<int>> adj(numCourses);
        
        for(int i=0;i<n;i++)
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        
        vector<int> vis(numCourses,0);
        
        for(int i=0;i<numCourses;i++)
          if(!vis[i])
            if(detectCycle(adj,i,vis))
            return ans;
        
        stack<int> s;
        
        // memset(vis,0,sizeof(vis)); //memset doesn't works on c++ objects!
        fill(vis.begin(),vis.end(),0);
        
        for(int i=0;i<numCourses;i++)
              if(!vis[i])  
                dfs(adj,i,vis,s);
        
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
    }
};