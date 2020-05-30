/*
Mohammed Mudassir Mohiuddin:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3342/
Possible Bipartition
*/

#define WHITE 0
#define RED   1
#define BLUE  2

class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(N+1);
        vector<int> color(N+1, WHITE);
        vector<bool> visited(N+1, false);
        
        for(auto edge : dislikes){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int> q;
        
        for(int i=1; i<=N; ++i)
        {
            if(!visited[i])
            {
                color[i] = RED;
                q.push(i);
                
                while(!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    
                    if(visited[u]) continue;
                    
                    visited[u] = true;
                    
                    for(auto v: adj[u])
                    {
                        if(color[u] == color[v])
                            return false;
                        
                        if(color[u] == RED)
                            color[v] = BLUE;
                        else
                            color[v] = RED;
                        q.push(v);
                    }
                }
                
            }
        }
        return true;
        
    }
};