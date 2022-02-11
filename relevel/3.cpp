#include<bits/stdc++.h>
using namespace std;


int func(vector<vector<int>>&hcf,int l,int x,int y,int n)
{
    int i=y,templ=l;
    for(int j=x+1;j<n;j++)
    {
        if(hcf[i][j]>1)
        {
            templ=max(templ,func(hcf,l+1,i,j,n));
            hcf[i][j]=0;
        }
    }
    // cout<<templ<<endl;
    return templ;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(auto &x:v)
    {
        cin>>x;
    }
    vector<vector<int>>hcf(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            // if(j==i)
            //     break;
            hcf[i][j]=__gcd(v[i],v[j]);
        }
    }
    int l=0;
    // for(auto x:hcf)
    // {
    //     for(auto y:x)
    //     cout<<y<<" ";
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(hcf[i][j]>1)
                {
                    l=max(l,func(hcf,1,i,j,n));
                    // cout<<l<<endl;
                    hcf[i][j]=0;
                }
        }
    }
    cout<<l+1<<endl;
    return 0;

}