#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>>adj[],int a,int b,int w)
{
    // a--;b--;
    adj[a].push_back(make_pair(b,w));
    adj[b].push_back(make_pair(a,w));
    return;
}


class Sol
{
    public:
    int curr_p=1;
    int mw=0;
    int ans=0;

    int drijiktra(vector<pair<int,int>>adj[],int n,vector<bool>&selected,vector<int>&wt)
    {
    wt[curr_p]=0;
    while(curr_p!=-1)
    {
        // cout<<"hello"<<endl;
        selected[curr_p]=1;
        // ans+=mw;
        for(auto x:adj[curr_p])
        {
            // cout<<"inside 1st loop"<<endl;
            if(!selected[x.first] && x.second+mw < wt[x.first])
                {
                    wt[x.first]=x.second+mw;
                    // cout<<"weigt array update"<<endl;
                }
        }

    curr_p=-1;
    mw=INT_MAX;
    for(int i=0;i<wt.size();i++)
    {
        
        if(!selected[i])
            {
                // cout<<"inside 2nd loop"<<endl;
                if(mw>wt[i])
                {
                    // cout<<"update mw"<<endl;
                    mw=wt[i];
                    curr_p=i;
                }
            }
    }
    // if()

    }
    return ans;
    }

};





int main()
{
    int n=4;
    vector<pair<int,int>>adj[n];
    addEdge(adj,0, 1,5);
    addEdge(adj,1, 2,1);
    addEdge(adj,0, 2,3);
    // addEdge(adj,2, 3,3);
    // addEdge(adj,1, 3,20);
    // addEdge(adj,4, 2,2);
    // addEdge(adj,2, 6,4);
    // addEdge(adj,3, 5,2);
    // addEdge(adj,3, 6,6);
    // addEdge(adj,3, 4,5);
    // addEdge(adj,4, 6,7);
    vector<bool>selected(n,false);
    vector<int>wt(n,INT_MAX);
    Sol t;
    t.drijiktra(adj,n,selected,wt);

    for(int i=0;i<n;i++)
    {
        cout<<"i: "<<i<<"; "<<wt[i]<<endl;
    }
    
    return 0;
    
}