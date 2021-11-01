#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>&v,vector<long long>&c,long long k,int n)
{
    long long  sum=0;
    int i=0,j;
    for(i=0;i<v[n-1];i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[j]>=i)
            {
                break;
            }
        }
        sum=c[n-1]-c[j]-(i*(n-1-j))+v[j];
        if(sum<k)
            break;
    }
    for(int t=0;t<n;t++)
    {
        v[t]=v[t]<i:0?v[t]-i;
    }

    c[0]=v[0];
    for(int i=1;i<n;i++)
    {
        c[i]=v[i]+v[i-1];
    }
    return 0;

}

int main()
{
    int n=0;
     long long k;
    cin>>n>>k;
    vector<int>v(n,0);
    vector<long long>c(n,0);
    for(auto &x:v)
    {
        cin>>x;
    }
    sort(v.begin(),v.end());
    c[0]=v[0];
    for(int i=1;i<n;i++)
    {
        c[i]=v[i]+v[i-1];
    }
    int sum=0;
    // for()
    if(v[n-1]!=0)
        func
}