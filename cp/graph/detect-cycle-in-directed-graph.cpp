#include<bits/stdc++.h>
using namespace std;


bool dfs(vector<int>adj[],int s,vector<bool>&v,vector<bool>&recst)
{
    v[s]=true;
    recst[s]=true;
    for(auto x:adj[s])
    {
        if((v[x]==false) && dfs(adj,x,v,recst))
            return true;
        else if(recst[x]==true)
            return true;
    }

    recst[s]=false;
    return false;
    // visited[numCourses]
}

int make_graph(vector<int>adj[],int a,int b)
{
    adj[a].push_back(b);
    return 1;    
}


int main()
{
    int numCourses=10;
    vector<int>adj[10];
    vector<vector<int>>data{{2,1},{6,2},{1,6}};
    for(auto x:data)
    {
        make_graph(adj,x[0],x[1]);
        // cout<<x[0]<<endl;
    }
    vector<bool>v(numCourses,false);
    vector<bool>recst(numCourses,false);
    for(int i=0;i<numCourses;i++)
    {
        if(v[i]==false)
        {
            if(dfs(adj,i,v,recst)==true)
                {
                    cout<<"true"<<endl;
                    return true;
                }
        }
    }
    return false;
    // dfs(adj,v,numCourses);
}