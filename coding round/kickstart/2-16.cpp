#include<bits/stdc++.h>
using namespace std;

class Sol
{
    public:
    int r=-1;
    bool check(set<int>&s,int pos)
    {
        if(s.count(pos+1) && s.count(pos+2) || s.count(pos-1) && s.count(pos-2) || s.count(pos+1) && s.count(pos-1))
            return false;
        return true;
    }

    // bool target_c

    int recdp(vector<vector<int>>&v,int target,set<int>&s,int pos)
    {
        if(target==0)
            {
                
                // if(pos<v.size())
                //     r=pos;
                return 1;
            }
        if(pos>=v.size())
            return 0;
        
        int temp=0,ans=0;
        temp=check(s,v[pos][1]);

        if(v[pos][0]>target || temp==false)
            ans=recdp(v,target,s,pos+1);

        if(ans)
            return 1;

        s.insert(v[pos][1]);
        ans=recdp(v,target-v[pos][0],s,pos+1);
        
        if(ans)
            return 1;
        else
        {
            s.erase(v[pos][1]);
        }

        ans=recdp(v,target,s,pos+1);
        if(ans)
            return 1;
        return 0;

    }

    int dis(int t)
    {
        int k,target;
        cin>>k>>target;
        vector<vector<int>>v(k,vector<int>(2,0));
        for(int i=0;i<k;i++)
        {
            cin>>v[i][0];
            v[i][1]=i;
        }

        sort(v.rbegin(),v.rend());
        set<int>s;
        int ans=0;
        ans= recdp(v,target,s,0);
        if(ans=1)
            {
                if(r!=-1)
                {
                    cout<<"Case #"<<t+1<<": "<<s.size()-1<<endl;
                    return 1;
                }
                cout<<"Case #"<<t+1<<": "<<s.size()<<endl;
            }
        else
            cout<<"Case #"<<t+1<<": -1"<<endl;
        return 1;
        // for(int i=0;i<k;i++)
        // {
        //     set<int>s;
        //     recdp(v,target,s);
        // }

    }
};

int main()
{
    int t,n,d,c,m;
    string s;
    cin>>t;
    Sol x;
    for(int i=0;i<t;i++)
    {
        x.dis(i);
    }
    return 0;
}