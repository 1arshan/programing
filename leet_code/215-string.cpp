#include<bits/stdc++.h>
using namespace std;


class Solution {
public:


    int findKthLargest(vector<int>& nums, int k) {
    
        int i =0,j=0,temp=0,pos=0;
        //k--;
        for(i =0;i<k;i++)
        {
            pos=i;
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[pos]<nums[j])
                {
                    pos=j;
                }
            }
            //cout<<"pos: "<<pos<<" nums[pos]: "<<nums[pos]<<endl;
            temp=nums[pos];
            nums[pos]=nums[i];
            nums[i]=temp;
            //cout<<nums[i]<<" ";
        }
        //cout<<endl;
        return nums[k-1];

    }
};

int main()
{
    vector<int>nums{3,2,3,1,2,4,5,5,6};
    int k =4;
    Solution t;
    cout<<t.findKthLargest(nums,k);
    

}