#include<bits/stdc++.h>
using namespace std;
void bfs(int n,vector<bool>&visited,vector<int>adj[])
{
    queue<int>q;
    visited[n] = true;
    q.push(n);
    while(!q.empty())
    {
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        for(auto i:adj[x])
        {
            if(!visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bfs(i,visited,adj);
        }
    }
}
