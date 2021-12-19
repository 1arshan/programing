#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;

    int ans=0;
    map<int,int>mp;
    while (t>0)
    {
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    
    for(auto x:v)
    {
        if(mp.count(x))
        {
            mp[x]++;
        }
        else
            mp.insert({x,1});
    }
    int temp=0;
    while (mp.count(0)>0 && mp[0]>0)
        {
            int i=1;
            while (mp.count(i)>0)
            {
                i++;
            }
            ans++;
            mp[0]--;
        }
    for(auto x=mp.begin();x!=mp.end();x++)
    {
        // cout<<x->first<<" "<<x->second<<endl;


        while(x->second>1 )
        {
            temp=x->first;
            while (mp.count(temp)!=0 && temp<=n)
            {
                temp++;
            }
            int p1=temp;
            temp=x->first;
            while (mp.count(temp)!=0 && temp>0)
            {
                temp--;
            }
            int p2=temp;
            if(p1!=x->first && p2!=x->first)
            {
                // ans+=min(abs(p1-x->first),abs(p2-x->first));
                int x1=abs(p1-x->first);
                int x2=abs(p2-x->first);
                if(x1>x2)
                {
                    ans+=x2;
                    mp.insert({x->first-x2,1});
                }
                else
                {
                    ans+=x1;
                    mp.insert({x->first+x1,1});
                }
                
            }
            else if(p1==x->first && p2!=x->first)
            {
                ans+=abs(p2-x->first);
                mp.insert({x->first-p2,1});
            }
            else if(p1!=x->first && p2==x->first)
            {
                ans+=abs(p1-x->first);
                mp.insert({x->first+p1,1});
            }
            else
            {
                cout<<"break";
            }
            x->second--;
        }
    }
        t--;
        mp.clear();
        v.clear();
    }
    return 0;
    // cout<<"ans: "<<ans<<endl;
}