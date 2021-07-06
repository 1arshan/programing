#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    bool findDoubt(vector<int>& nums,int pos)
    {
        if(pos==1 ||pos ==nums.size()-1)
            {
                return true;
            }
        else
            {
                if(nums[pos-2]<nums[pos])
                    // if (nums[pos-2]>=nums[pos])
                    return true;
                else if(nums[pos-1]<nums[pos+1])
                    return true;
                
                
            }
        return 0;
    }

    bool canBeIncreasing(vector<int>& nums) {
        int temp =0,pos =-1;
        for(int i =0;i<nums.size()-1;i++)
        {
            if(nums[i+1]<=nums[i])
            {
                //i not zero
                // if(nums[])
                if(temp==0)
                {
                    pos =i+1;
                    temp++;
                    // if(i)
                }
                else
                {
                    return false;
                }
            }
        }

        if(temp==1 && pos !=-1)
        {
            return findDoubt(nums,pos);   
        }
        return true;
    }
};

int main()
{
    vector<int>nums{1,2,1,2,5,7};
    Solution t;
    cout<<t.canBeIncreasing(nums);
}