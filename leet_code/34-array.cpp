#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int found=0,l_pos=-1,r_pos=-1;
    
    int seex(vector<int>&v,int l,int r,int t,int way)
    {
        // cout<<"l: "<<l<<"; r: "<<r<<endl;
        int half;
        if(r-l==0)
        {
            if(v[r]==t)
            {
                if(way==-1)
                    l_pos=r;
                else
                    r_pos=r;
            }
                // return r;
            return -1;
        }
        half=l+((r-l)/2);
        if(v[half]==t)
        {
            if(way==-1)
            {
                l_pos=half;
                return seex(v,l,half-1,t,way);    
            }
            else
            {
                r_pos=half;
                return seex(v,half+1,r,t,way);
            }
            // return half;
        }
        else if(v[half]>t)
        {
            return seex(v,l,half-1,t,way);
        }
        else
        {
            return seex(v,half+1,r,t,way);
        }
    }
    
    int sr(vector<int>&v,int l,int r,int t)
    {
        int half;
        if(r-l==0)
        {
            //found
            if(v[r]==t)    
            {
                l_pos=r_pos=r;
                return r;
            }
            return -1;
        }
        if(r-l==1)
        {
            //found
            if(v[l]==t)    
            {
                l_pos=l;
                if(v[r]==t)
                    r_pos=r;
                else
                    r_pos=l;
                return r;
            }
            else if(v[r]==t)
                l_pos=r_pos=r;
            return -1;
        }
        half=l+((r-l)/2);
        if(v[half]==t)
        {
            // cout<<"l: "<<l<<"; r: "<<r<<endl;
            l_pos=r_pos=half;
            seex(v,l,half-1,t,-1);
            seex(v,half+1,r,t,1);
            return half;
        }
        else if(v[half]>t)
        {
            return sr(v,l,half-1,t);
        }
        else
        {
            return sr(v,half+1,r,t);
        }
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return {-1,-1};
        int pos=sr(nums,0,nums.size()-1,target);
//         if(pos !=-1)
//         {
            
//         }
        return {l_pos,r_pos};
    }
};