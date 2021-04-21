#include<bits/stdc++.h>
using namespace std;

class TargetSum
{
    int sum=0;
    vector<int>prev;
    vector<int>cur;

    TargetSum(vector<int>&nums,int target)
    {
        sum_v(nums);
        sum =sum-target;
        prev.resize(target+1);
        cur.resize(target+1); 
        find_ways(nums,target);
    }

    int find_ways(vector<int>nums,int target)
    {
        for (auto x:nums)
        {
            for (int i =0;i<=target;i++)
            {
                
            }
        }

    }

    int sum_v(vector<int>nums)
    {
       for (auto x:nums)
       {
           sum+=x;
       } 
       
    }
};


int main()
{
    vector<int>nums{1,1,1,1,1};
    int target =3;

    Target t(nums,target);

}