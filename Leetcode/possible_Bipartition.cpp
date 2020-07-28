https://leetcode.com/problems/possible-bipartition/
username: abhishek818

class Solution {
public:
    
    bool isBipartite(vector<vector<int>>& adj,vector<int>& colors,int vertex,int N)
    {
        queue<int> q;
        q.push(vertex);
        colors[vertex]=1;
        int cur;
        
        while(!q.empty())
        {
            cur=q.front();
            q.pop();
           for(int i=0;i<adj[cur].size();i++)
          {
            if(colors[adj[cur][i]]==colors[cur])
            return 0;
            if(colors[adj[cur][i]]==-1)
            {
                colors[adj[cur][i]]=1-colors[cur];
                q.push(adj[cur][i]);
            }    
          } 
        }
        return 1;
    }
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(N+1);
        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
                                                     
        vector<int> colors(N+1,-1);
  
        for(int i=1;i<N+1;i++)
        {
            if(colors[i]==-1)
                if(!isBipartite(adj,colors,i,N))
                    return 0;
        }                    
         return 1;                                                     
    }
};