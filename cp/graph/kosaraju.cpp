#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int>adj[],int a,int b)
{
    adj[a].push_back(b);
}

class Sol
{
    public:
    int curr=0;
    stack<int>bag;
    bool dfs(vector<int>adj[],int s,vector<bool>&v,vector<vector<int>>&time)
    {
    v[s]=true;
    

    for(auto x:adj[s])
    {
        if(!v[x])
        {
            // time[s][0]=++curr;
            time[x][0]=++curr;
            dfs(adj,x,v,time);
        }
    }
    time[s][0]=++curr;
    return 1;
    // visited[numCourses]
}

    int dfs_traversal(vector<int>adj[],vector<bool>&v,int s)
    {
        v[s]=1;
        bag.push(s);
        for(auto x:adj[s])
        {
            if(!v[x])
            {
                dfs_traversal(adj,v,x);
            }
        }
        return 1;
    }

};


int main()
{
    int n=5;
    vector<int>adj[n];
    addEdge(adj,2, 0);
    addEdge(adj,0, 1);
    addEdge(adj,1, 2);
    addEdge(adj,1, 3);
    addEdge(adj,3, 4);
    // addEdge(adj,4, 3);
    
    vector<bool>v(n,false);
    vector<vector<int>>time(n,vector<int>(2,0));
    Sol t;
    for(int i=0;i<n;i++)
    {
        time[i][1]=i;
    }

    for(int i=1;i<n;i++)
    {
        if(v[i]==false)
        {
            t.dfs(adj,i,v,time);
            // cout<<"hello"<<endl;
        }
    }

    sort(time.rbegin(),time.rend());
    vector<int>radj[n];

//  reversing graph
    for(int i=0;i<n;i++)
    {
        for(auto x:adj[i])
            radj[x].push_back(i);
    }

    for(auto x:v)
        x=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        if(!v[i])
        {
            t.dfs_traversal(radj,v,i);
            while (t.bag.empty()==false)
            {
                temp=t.bag.top();
                t.bag.pop();
                cout<<temp<<" ";
            }
            cout<<endl;
            
        }
    }

    // for(auto x:time)
    // {
    //     cout<<x[1]<<" ";
    // }

    return 0;
    
}