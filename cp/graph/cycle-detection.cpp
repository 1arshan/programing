#include<bits/stdc++.h>
using namespace std;


class Graph
{
    public:
    int cycle=false;
    void addEdge(vector<int>adj[],int v,int u)
    {
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    
    int dfsrec(vector<int>adj[],int s,vector<bool>&visited,int parent)
    {
    
    visited[s]=true;
    cout<<s<<" ";
    for(int x:adj[s])
    {
        if(visited[x]==false)
            dfsrec(adj,x,visited,s);
        else if(x!=parent)
            {
                cycle =true;
                return 1;
            }
    }
    return 1;
}

    void dfs(vector<int>adj[],int v)
    {
        vector<bool>visited(v,false);
        dfsrec(adj,0,visited,-1);
    }

};




int main()
{
    int v=6;
    Graph g;

    vector<int>adj[v];
    g.addEdge(adj,0,1);
    g.addEdge(adj,1,2);
    // g.addEdge(adj,1,3);
    g.addEdge(adj,2,4);
    g.addEdge(adj,4,3);
    g.addEdge(adj,4,5);
    g.dfs(adj,v);
    cout<<"cycle: "<<g.cycle<<endl;

}