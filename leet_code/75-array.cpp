#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int p1=1,p2=0;

    int sortOneTwo(vector<int>&nums)
    {

        p1=p2+1;
        //int temp=0;
        while(true)
        {
            while ( p1<nums.size()&&nums[p1]!=1)
            {
                p1++;
            }
            while (p2<nums.size()&&nums[p2]!=2)
            {
                p2++;
            }
            //cout<<"p1: "<<p1<<" p2: "<<p2<<endl;
            if(p1==nums.size() ||p2>=nums.size())
                return 1;
            if(p2>p1)
            {
                p1++;
                continue;
            }
            // temp=nums[p2];
            // nums[p2]=nums[p1];
            // nums[p1]=temp;
            nums[p2]=1;
            nums[p1]=2;
            p1++;
            p2++;
        }
        return 1;
    }

    int groupZero(vector<int>&nums)
    {
        //int temp=0;
        while(true)
        {
            while (p1<nums.size() && (nums[p1]!=0))
            {
                p1++;
            }
            while (p2<nums.size()&& !(nums[p2]==1 ||nums[p2]==2))
            {
                p2++;
            }
            //cout<<"p1: "<<p1<<" p2: "<<p2<<endl;
            if(p1==nums.size() ||p2>=nums.size())
                return 1;
            if(p2>p1)
            {
                p1++;
                continue;
            }

            //p2 & p1 not exceeded their size
            //temp=nums[p2];
            //nums[p2]=nums[p1];
            nums[p1]=nums[p2];
            nums[p2]=0;
            p1++;
            p2++;
        }
        return 1;
    }

    void sortColors(vector<int>& nums) {
        if(nums.size()>1)
        {
            groupZero(nums);
             if (p2!=nums.size())
                sortOneTwo(nums);
        }
        

    }
};

int main()
{
    vector<int>nums{0,2,2,1};
    Solution t;
    t.sortColors(nums);
    for(auto x:nums)
    {
        cout<<x<<" ";
    }
    
}