#include<bits/stdc++.h>
using namespace std;

class Sol
{
    public:

    // int suba

    int soll(int t)
    {
        int n;
        cin>>n;
        vector<long >v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int maxx=0,temp=0,pos=0;
        // set<long>s;
        for(int j=0;j<n;j++){
            set<long>s;
        for(int i=j;i<n;i++)
        {
            s.insert(v[i]);
        }
        temp=s.size();
        if(temp>=maxx)
        {
            maxx=temp;
            pos=j;
        }
        // cout<<s.size()<<endl;
        }
        
        // maxx=max(maxx,temp);
        // s.empty();
        
        cout<<v.size()-pos<<endl;
        return 1;
    }
};

int main()
{
    int t;
    cin>>t;
    Sol u;
    for(int i=0;i<t;i++)
    {
        u.soll(t);
    }
    return 0;
}