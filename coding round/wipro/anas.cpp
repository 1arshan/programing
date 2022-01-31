#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=n;
    vector<int>v;
    while (t)
    {
        v.push_back(t%10);
        // n=n%10;
        t=t/10;
    }
    sort(v.begin(),v.end());
    t=0;
    cout<<v.size()<<endl;
    int j=0,b=v.size()-1,s=0;

    for(int i=v.size()-1;i>=0;i--)
    {
        t+=v[i]*pow(10,j);
        s+=v[i]*pow(10,b);
        b--;
        j++;
    }
    
    cout<<t+s;
}