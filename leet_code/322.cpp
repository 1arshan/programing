#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int recdp(vector<vector<int>>&nums,vector<int>&coins,int n,int target)
    {
        int temp=0,temp1=0;
        if(target==0||n==0)
            return 0;
        if(nums[n-1][target-1]!=-1)
            return nums[n-1][target-1];
        if(coins[n-1]<=target)
        {
            temp=recdp(nums,coins,n,target-coins[n-1]);
            temp1=recdp(nums,coins,n-1,target);
            return nums[n-1][target-1]= (temp>0?temp+1:target==coins[n-1]?1:0) ==temp+1 ? (temp1>0?min(temp+1,temp1):temp+1): temp1;
            
        }
        else
        {
            return nums[n-1][target-1]=recdp(nums,coins,n-1,target);
        }
    }
    
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        if(amount==0)
            return 0;
        vector<vector<int>>nums(coins.size(),vector<int>(amount,-1));
        recdp(nums,coins,coins.size(),amount);
        // for(auto x:nums)
        // {
        //     for(auto y:x)
        //     {
        //         cout<<y<<" ";
        //     }cout<<endl;
        // }
        int temp=nums[coins.size()-1][amount-1];
        return temp>0?temp:-1;
    
    }
};