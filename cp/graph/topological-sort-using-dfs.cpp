#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int a,int b)
{
    adj[a].push_back(b);
    // degree[b]++;
    // return 1;
}


int dfs(vector<int>adj[],stack<int>&st,vector<bool>&visited)
{
    
}

int main()
{
    int n=7;
    vector<int>adj[n];
    vector<int>degree(n,0);
    // addEdge(adj,1, 6);
    addEdge(adj,2, 1); 
    addEdge(adj,3, 1); 
    addEdge(adj,3, 5); 
    addEdge(adj,4, 2);
    addEdge(adj,4, 3);
    addEdge(adj,4, 5);
    addEdge(adj,5, 2);
    addEdge(adj,6, 2);
    stack<int>st;
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            dfs(adj,st,visited);
        }
    }
    // cout<<topological_sort(adj,n,degree);


}