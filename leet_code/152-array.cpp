#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int temp_prod1=1,temp_prod2=1,max_prod=1,change=0,change1=0; //last me sambhalne ke liye

    int maxProduct(vector<int>& nums) {
        int i =0,j=0;

        if(nums.size()==1)
            return nums[0];

        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                change1=1;
                if(max_prod<temp_prod1)
                    {
                        max_prod=temp_prod1;
                        temp_prod1=1;
                    }
            }
            else if(nums[i]<0)
            {
                for(j=i+1;j<nums.size();j++)
                {
                    if(nums[j]==0)
                    {   
                        change1=1;
                        // cout<<"temp_prod1: "<<temp_prod1<<" temp_prod2: "<<temp_prod2<<endl;
                        if (temp_prod2>temp_prod1 && max_prod<temp_prod2)
                        {
                            max_prod=temp_prod2;
                        }
                        else
                        {
                            if(max_prod<temp_prod1)
                            {
                                max_prod=temp_prod1;
                                // temp_prod1=1;
                            }
                        }
                        temp_prod2=1;
                        temp_prod1=1;
                        break;
                    }
                    else if(nums[j]<0)
                    {
                        change=1;
                        // change1=0;
                        // cout<<"hello"<<endl;
                        temp_prod2*=nums[i]*nums[j];  
                        break;
                    }
                    else
                    {   
                        temp_prod2*=nums[j];
                        change=1;
                        if(j==nums.size()-1)
                        {
                            if(temp_prod2>temp_prod1 && max_prod<temp_prod2)
                            {
                                max_prod=temp_prod2;
                            }
                            temp_prod2=1;
                        }
                        // else
                        //     temp_prod2*=nums[j];
                    }
                }
                temp_prod1*=temp_prod2;
                temp_prod2=1;
                i =j;
            }
            else
            {   change=1;
                temp_prod1*=nums[i];
            }
        }
        if(max_prod<temp_prod1)
        {
            //cout<<"temp_prod1: "<<temp_prod1<<endl;
            max_prod=temp_prod1;
            temp_prod1=1;
        }
        if((change==0) && (change1==1))
            return 0;
        return max_prod;
    }
};


int main()
{
    vector<int>nums{3,-1,4};
    Solution t;
    cout<<t.maxProduct(nums);
}