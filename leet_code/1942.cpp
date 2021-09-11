#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestChair(vector<vector<int>>& t, int tf) {
        // vector<int>v(t.size(),)
        vector<pair<int,int>>v(t.size());
        int i=0,j=0,at=0;
        // cout<<t.size();
        // for(auto x:v)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
            for(i=0;i<t.size();i++)
            {
                // cout<<t[i][0]<<" "<<t[i][1]<<endl;
                v[i].first=t[i][0];
                v[i].second=t[i][1];
                if(i==tf)
                {
                    at=t[i][0];
                }
            }
        sort(v.begin(),v.end());
        // return v[0].first;
        i=0;
        priority_queue<int>dt; //departure time
        priority_queue<int>mc; //min chair
        unordered_map<int, int> umap;
        int hic=0; //highest chair number
        while(v[i].first!=at)
        {
            //deletion
           while(dt.empty()!=true)
           {
               if(dt.top()*-1<=v[i].first)
               {
                   umap.erase()       
                   dt.pop();
               }
               else
               {
                   break;
               }
           }
           if(mc.empty()!=true)
                umap[v[i].second]=mc.top()*(-1);
                mc.pop();
            else
            {
                umap[v[i].second]=hic;
            }
            dt.push((-1)*v[i]);
            i++;
            hic++;
        }
    }
};