#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int initial(vector<string>& nums,vector<vector<int>>&v)
    {
        char c='x';
        int i=0,pos=0,t=0;
        for(int j=0;j<nums.size();j++)
        {   pos=0;
            for(i=100- nums[j].size();i<100;i++)
            {
                c=nums[j][pos];
                t=c-48;
                // cout<<nums[j][0]<<endl;
                v[j][i]=t;
                // cout<<v[j][i]<<endl;
                pos++;
            }
         // return 0;
        }
        return 0;
    }
    
    string conver(vector<vector<int>>&v,int pos,int k)
    {
        // for(auto x:v[k])
        //     cout<<x<<" ";
        cout<<endl;
        string s(100-pos,'#');
        char c='x';
        int t=0,temp=0;
        for(int i=pos;i<100;i++)
        {
            t=v[k][pos];
            c=48+t;
            // s.push_back(c);
            s[temp]=c;
            pos++;
            temp++;
        }
        return s;
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
     vector<vector<int>>v(nums.size(),vector<int>(100,0));
        initial(nums,v);
        sort(v.begin(),v.end());
        
        // for(auto x: v)
        // {
        //     for(auto y:x)
        //     {
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        // to_string(v)
        k=nums.size()-k;
        // cout<<k<<endl;
        for(int i=0;i<100;i++)
        {
            if(v[k][i]!=0)
                return conver(v,i,k);
                
        }
        // auto s = std::to_string(42);
    return "0";        
    }
    
};