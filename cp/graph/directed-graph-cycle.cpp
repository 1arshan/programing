#include<bits/stdc++.h>
using namespace std;

bool dfsrec(vector<int>adj[],int s,vector<int>&visited,vector<int>&rec)
{
    visited[s]=true;
    rec[s]=true;
    for(int x:adj[s])
    {
        if(visited[x]==false && dfsrec(adj,x,visited,rec))
            return true;
        else if(rec[x]==true)
            return true;
    }
    rec[s]=false;
    return false;
}

bool dfs(vector<int>adj[],int v)
{
    vector<bool>visited{v,false};
    vector<bool>rect{v,false};
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            if(dfsrec(adj,i,visited,rect))
                return true;
        }
        return false;
    }
}


int main()
{

}