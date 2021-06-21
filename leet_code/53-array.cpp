#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp=-100000,max=-999999;

        for(auto x:nums)
        {   
            temp+=x;
            if(temp<=x)
            {
                
                temp=x;
                // cout<<"x: "<<x<<endl; 
            }
            // else
            // {
            //     temp+=x;
            // }
            if(max<temp)
                {
                    max=temp;
                }
        }
        if(max<temp)
            {
                max=temp;
            }
        return max;
    }
};


int main()
{
    vector<int>nums{-1,0,-2};
    Solution t;
    cout<<t.maxSubArray(nums);
}