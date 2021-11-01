#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;

ll gcd(ll a,ll b,ll &x,ll &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    ll x1,y1;
    ll g =gcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return g;
}   

ll solve(ll n,ll r)
{
    if(r>n-r)
    {
        r=n-r;
    }
    ll a=1,b=1;
    for(int i=0;i<r;i++)
    {
        a=(a*(n-i))%mod;
        b=(b*(i+1)%mod);
    }
    ll x,y;
    gcd(b,mod,x,y);
    ll res=(a*(x%mod+mod)%mod)%mod;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        ll x; 
        cin>>x;
        m-=x;
    }
    cout<<solve(m+n-1,n-1);
}
