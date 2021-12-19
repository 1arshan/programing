#include<bits/stdc++.h>
using namespace std;

long long findr(vector<vector<long long>>v,long x,long y)
{
    long long temp=0,ret=0;
    int i;
    for(i=0;i<v.size();i++)
    {
        if(v[i][0]>=x)
        {
            if(i>0)
            {
                temp=v[i-1][1];    
            }
            // i++;
            while(i<v.size())
            {

                if(v[i][0]>y)
                {
                    if(i==0)
                        return temp;
                    return v[i-1][1]-temp;
                }
                i++;
            }
        }
    }
    if(v[v.size()-1][0]<x)
        return 0;
    return v[v.size()-1][1]-temp;
}

int main()
{
    int n,q;
    cin>>n>>q;
    vector<vector<long long>>v(n,vector<long long >(2,0));
    for(int i=0;i<n;i++)
    {
        cin>>v[i][0]>>v[i][1];
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        v[i][1]=v[i-1][1]+v[i][1];
    }
   
    long long x,y;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        cout<<findr(v,x,y)<<endl;
        // upper_bound(v.)
    }
    return 0;
}