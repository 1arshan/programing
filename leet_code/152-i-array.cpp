#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int max =0;
    vector<int>mem{1,1,1,1,1};//prod,index,prod,index
    
    int calMax(vector<int>&nums)
    {
        int temp =0;
        if(mem[1]<0)//only one -ve
        {
            if(mem[3]<0)//2nd -ve
            {
                if(mem[2]<0)
                {
                    temp = mem[0]*mem[1]>mem[3]*mem[4]?mem[3]*mem[4]:mem[0]*mem[1];
                    return temp*mem[2];
                }
                else
                {
                    return mem[0]*mem[1]*mem[2]*mem[3]*mem[4];
                }
            }
            else
            {
                temp =mem[0]>mem[2]?mem[0]:mem[2];
                return temp;
                // return mem[0]*mem[1]*mem[2]*mem[3];
            }
        }
        else
        {
            return mem[0];
        }
    }

    int insertProd(vector<int>& nums,int nexus,int prod)
    {
        if(mem[1]<0)
        {
            if(mem[3]<0)
            { 
                mem[2]*=mem[3]*prod;
                mem[3]=nums[nexus];
            }
            else
            {
                mem[2]=prod;
                mem[3]=nums[nexus];
            }
        }
        else
        {
            mem[0]=prod;
            mem[1]=nums[nexus];
        }
        return 1;
    }

    int maxProduct(vector<int>& nums) {
        int i,temp_prod=1;
        for(i =0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                insertProd(nums,i,temp_prod);
                temp_prod=1;
            }
            // else if(nums[i]==0)
            // {

            // }
            else
            {
                temp_prod*=nums[i];
            }
        }
        cout<<mem[0]<<" "<<mem[1]<<" "<<mem[2]<<endl;
        return calMax(nums);// last element enter krne ke liye
    }
};

int main()
{
    vector<int>nums{2,3,-2,4};
    Solution t;
    cout<<t.maxProduct(nums);
}