// A simple representation of graph using STL
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}


void bfs(vector<int>adj[],int v,int s)
{
    vector<bool>visited(v+1,false);
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(auto x: adj[u])
        {
            if(visited[x]==false)
            {
                visited[x]=true;
                q.push(x);
            }
        }
    }
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex "
			<< v << "\n head ";
		for (auto x : adj[v])
		cout << "-> " << x;
		printf("\n");
	}
}

// Driver code
int main()
{
    int V=5;
    vector<int>adj[V];
    addEdge(adj,0,1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
    bfs(adj,V,0);
	return 0;
}
