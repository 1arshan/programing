#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<int>adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<"adjacency node of "<<i;
        for(auto x:adj[i])
            cout<<"-> "<<x;
        cout<<endl;
    }
}

void dfsrec(vector<int>adj[],int s,vector<bool> &visited)
{
    visited[s]=true;
    cout<<s<<" ";
    for(int x:adj[s])
    {
        if(visited[x]==false)
            dfsrec(adj,x,visited);
    }
}

void dfs(vector<int>adj[],int v,int s)
{
    vector<bool>visited(v,false);
    dfsrec(adj,s,visited);
}


int main()
{
    int v=5;
    vector<int>adj[v];
    addedge(adj,0,1);
    addedge(adj,0,4);
    // addedge(adj,2,3);
    addedge(adj,2,1);
    addedge(adj,1,4);
    addedge(adj,4,3);
    printgraph(adj,v);
    dfs(adj,v,0);

}