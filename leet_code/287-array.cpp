#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int found=0,freq=0;

    int binarySearch(vector<int>& nums,int s_pos,int e_pos)
    {   
        int temp=0;
        if (found!=0)
        {   
            //cout<<"fouding "<<"s_pos: "<<s_pos<<"; e_pos: "<<e_pos<<endl;
            return 1;
        }
        //this part break
        if(e_pos-s_pos==1)
        {
            if(nums[s_pos]==nums[e_pos])
            {
                found=s_pos;
            }
            return 1;
        }
        else if(e_pos-s_pos==0)
        {
            return 1;
        }
        else
        {
            //cout<<"breaking "<<"s_pos: "<<s_pos<<"; e_pos: "<<e_pos<<endl;
            // if(freq<6)
            // freq++;
            // else
            // return 1;
            temp=s_pos+(e_pos-s_pos)/2;
            binarySearch(nums,s_pos,temp);
            binarySearch(nums,temp+1,e_pos);
        }
        //this part merge it
        if (found!=0)
        {   
            //cout<<"fouding "<<"s_pos: "<<s_pos<<"; e_pos: "<<e_pos<<endl;
            return 1;
        }
        else
        {
            for(int i =s_pos;i<=e_pos/2;i++)
            {
                for(int j=e_pos/2+1;j<=e_pos;j++)
                {
                    if(nums[i]==nums[j])
                    {
                        found=i;
                        break;

                    }
                }
                if (found!=0)
                break;
            }
            return 1;
        }
    }

    int findDuplicate(vector<int>& nums) {
        binarySearch(nums,0,nums.size()-1);
        //cout<<nums[found];
        return nums[found];
    }
};

int main()
{
    vector<int>nums{8,1,1,1,2,7,4};
    Solution t;
    t.findDuplicate(nums);
}

