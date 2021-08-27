#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int prev=0;
    int func(int p1,int p2,vector<int>& v)
    {
        if(p2>p1)
        {
            if(p2==v.size()-1)
            {
                return -1;
            }
            else
            {
                return p2+1;
            }
        }
        else
        {
            if(p1==v.size()-1)
                return -1;
            else
                return ++p1;
        }
    }
    
    long long numberOfWeeks(vector<int>& v) {
        long long ans=0;
        if(v.size()==1)
            return 1;
        sort(v.rbegin(),v.rend());
        // for(auto x:v)
        //     cout<<x<<" ";
        int p1=0,p2=1,temp=0,t1=0,t2=0;
        for(int i=0;i<v.size() && p1<v.size() && p2<v.size();)
        {
            if(v[p1]==0)
            {
                temp=func(p1,p2,v);
                if(temp==-1)
                    break;
                else
                    p1=temp;
            }
            if(v[p2]==0)
            {
                temp=func(p2,p1,v);
                if(temp==-1)
                    break;
                else
                    p2=temp;
            }
            ans+=2;
            t1=p1;
            t2=p2;
            v[p1]--;
            v[p2]--;
            // cout<<"p1: "<<p1<<"; p2: "<<p2<<endl;
            // p1++;
            // p2++;
        }
        cout<<"ans: "<<ans<<endl;
        // cout<<"p1: "<<p1<<"; p2: "<<p2<<": t2: "<<t2<<endl;
        if(p1<p2)
        {
            if(v[p1]!=0)
                ans+=1;
            else
            {
                if(p2!=t2)
                    ans+=1;
            }
        }
        else if(p2<p1)
        {
            if(v[p2]!=0)
                ans+=1;
            else
            {
                if(p1!=t1)
                    ans+=1;
            }
                
        }
        return ans;
    }
};