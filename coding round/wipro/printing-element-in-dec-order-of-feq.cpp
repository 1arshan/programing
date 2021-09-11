// Eg: size 19

// arr = {1,2,2,3,3,3,4,4,5,5,5,5,6,6,6,7,8,9,10}

// O/p:

// {5,5,5,5,3,3,3,6,6,6,2,2,4,4,1,7,8,9,10}

#include<bits/stdc++.h>
using namespace std;

static bool cmp(vector<int> &a ,vector<int>&b)
{
    if(a[0]==b[0])
    {
        // if(a[1]<b[1])
        //     return 0;
        // return 1;
        return a[1]>b[1];
    }
    return a[0]<b[0];
}

int main()
{
    map<int,int>m;
    vector<int>v{1,2,2,3,3,3,4,4,5,5,5,5,6,6,6,7,8,9,10};
    for(auto x:v)
    {
        if(m.count(x))
        {
            m[x]=++m[x];
            // cout<<"dsfsd";
        }
        else
        {
            m.insert({x,1});
        }
    }
    int s=m.size();
    // priority_queue<int>pq;
    vector<vector<int>>v2(s,vector<int>(2,0));
    // for(int i=0;i<s;i++)
    // {
    //     // v2[i][0]=
    // }
    int i=0;
    for(auto x:m)
    {
        v2[i][0]=x.second;
        v2[i][1]=x.first;
        i++;
    }    
    sort(v2.begin(),v2.end(),cmp);
    for(auto x:v2)
    {
        cout<<x[1]<<" ";
    }
}