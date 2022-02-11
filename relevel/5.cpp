#include<bits/stdc++.h>
using namespace std;

int mino(vector<int>&v,int n)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]+=1;
    }
    int count=0;

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if((*it).second >1 )
            count+=(*it).second-1;
    }
    return count;
}

int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        vector<int>v(m,0);
        for(int j=0;j<m;j++)
        {
            cin>>v[j];
        }
        cout<<mino(v,m);
    }
    return 0;
}