#include<bits/stdc++.h>
using namespace std;

int topological_sort(vector<int>adj[],int n,vector<int>&degre)
{
    vector<bool>visited(n,false);
    queue<int>q;
    for(int i=0;i<degre.size();i++)
    {
        if(degre[i]==0)
            q.push(i);
    }
    while (q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        // visited[u]=1;
        for(auto x:adj[u])
        {   
            degre[x]--;
            if(degre[x]==0)
            {
                q.push(x);
            }
        }
    }
    cout<<endl;
    for(auto x:degre)
    {
        if(x!=0)
            return 0;
    }
    return 1;
}

void addEdge(vector<int>&degree,vector<int>adj[],int a,int b)
{
    adj[a].push_back(b);
    degree[b]++;
    // return 1;
}

int main()
{
    int n=7;
    vector<int>adj[n];
    vector<int>degree(n,0);
    addEdge(degree,adj,1, 6);
    addEdge(degree,adj,2, 1); 
    addEdge(degree,adj,3, 1); 
    addEdge(degree,adj,3, 5); 
    addEdge(degree,adj,4, 2);
    addEdge(degree,adj,4, 3);
    addEdge(degree,adj,4, 5);
    addEdge(degree,adj,5, 2);
    addEdge(degree,adj,6, 2);
    cout<<topological_sort(adj,n,degree);


}