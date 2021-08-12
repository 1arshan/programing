#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int recdp(vector<vector<int>>&v,vector<int>&nums,int n,int target)
    {
        if(n==0||target==1||target==0)
        {
            if(n!=0)
            {
                return nums[n-1]==1?1:0;
            }
            return 0;
        }
        // if(nums[n-1]<=target)
        if(target>=nums[n-1])
        {
            if(target%nums[n-1]==0)
            {
                return recdp(v,nums,n-1,target/nums[n-1]);
            }
            else
            {
                return recdp(v,nums,n,--target);
            }
            recdp(v,nums,n-1,target/nums[n-1]);
        }
        else
        {
            return recdp(v,nums,n-1,target);
        }
    }

    int subset(int target,vector<int>&nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v(nums.size(),vector<int>(target,-1));
        recdp(v,nums,nums.size(),target);
        return 1;
    }
};


int main()
{
    int target=12;
    vector<int>nums{2,4,5,3};
}