#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll x,y,diff,t=0;
        cin>>x>>y;
        diff=abs(y-x);
        ll sum=0;
        while (sum<diff)
        {
            t++;
            sum+=t;
        }
        cout<<t<<endl;
    }
    
}