// revision
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum=0;
    int noz=0;
    // vector<vector<int>>v{1,vector<int>(1,0)};
    int sum_vector(vector<int>& nums, int target)
    {
        for(auto x:nums)
            sum+=x;
        if(target>sum)
            return 0;
        if(target<0)
            target=-target;
        target=sum-target;
        if(target%2!=0)
            return 0;
        sum=target/2;
        return 1;
    }

    int recDP(vector<int>& nums,vector<vector<int>>&v, int target,int n)
    {   
        // cout<<"target: "<<target<<"; n: "<<n<<endl;
        int temp=0;
        if(target==0||n<=noz)
            return 0;
        if(v[n-1][target-1]!=0)
        {
            // cout<<"match"<<endl;
            return v[n-1][target-1];
        }
        if(nums[n-1]<=target)
        {
            temp=recDP(nums,v,target-nums[n-1],n-1);
            if(temp==0)
                temp=nums[n-1]==target?1:0;
            return v[n-1][target-1]= temp+recDP(nums,v,target,n-1);
        }
        else
        {
            return v[n-1][target-1]=recDP(nums,v,target,n-1);
        }
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        for(noz=0;noz<nums.size();noz++)
        {
            if(nums[noz]!=0)
                break;
        }
        if(noz==nums.size()||nums.size()-noz==1)
            return pow(2,noz);
        // if(nums.size()-noz==1)
        //     return target==nums[0]?1:0;
        int ret=sum_vector(nums,target);
        if(ret==0)
            return 0;//if target >sum
        
        vector<vector<int>>v{nums.size()-noz,vector<int>(sum,0)};
        recDP(nums,v,sum,nums.size());
        // for(auto x:v)
        // {
        //     for(auto y:x)
        //     cout<<y<<" ";
        //     cout<<endl;
        // }
        return v[nums.size()-1][sum-1];
    }
};


int main()
{
    vector<int>nums{1,1,0,1};
    int target=1;
    Solution t;
    cout<<t.findTargetSumWays(nums,target);
}