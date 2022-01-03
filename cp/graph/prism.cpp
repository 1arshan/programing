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
    int curr_p=0;
    int mw=0;
    int ans=0;

    int prism(vector<pair<int,int>>adj[],int n,vector<bool>&selected,vector<int>wt)
    {
    // wt[]
    while(curr_p!=-1)
    {
        cout<<"hello"<<endl;
        selected[curr_p]=1;
        ans+=mw;
        for(auto x:adj[curr_p])
        {
            // cout<<"inside 1st loop"<<endl;
            if(!selected[x.first] && x.second < wt[x.first])
                {
                    wt[x.first]=x.second;
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
    int n=5;
    vector<pair<int,int>>adj[n];
    addEdge(adj,0, 1,2);
    addEdge(adj,0, 3,6);
    addEdge(adj,3, 1,8);
    addEdge(adj,4, 1,5);
    addEdge(adj,1, 2,3);
    addEdge(adj,4, 2,7);
    addEdge(adj,3, 4,9);
    // addEdge(adj,1, 6);
    // addEdge(adj,2, 1,3); 
    // addEdge(adj,3, 1,3);
    // addEdge(adj,6, 1,4);
    // addEdge(adj,2, 3,8);
    // addEdge(adj,2, 4,11);
    // addEdge(adj,2, 5,1);
    // // addEdge(adj,2, 1,3);
    // addEdge(adj,3, 5,7);
    // addEdge(adj,3, 4,5);
    // addEdge(adj,3, 6,2);
    // addEdge(adj,4, 5,9);
    // addEdge(adj,2, 6,2);
    vector<bool>selected(n,false);
    vector<int>wt(n,INT_MAX);

    Sol t;
    t.prism(adj,n,selected,wt);
    cout<<t.ans;
    
}