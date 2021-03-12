#include<bits/stdc++.h>
using namespace std;


    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
            vector<int>target(nums.size());
            int value,pos;
            int i=0;
        //auto itPos = target.begin()+i;
        for(i =0;i<nums.size();i++)
        {   
            auto itPos = target.begin()+index[i];
            target.insert(itPos, nums[i]);
        }target.shrink_to_fit();
        return target;
    }

int main()
{
    vector<int>nums ={1,2,3,4,0};
    vector<int>index={0,1,2,3,0};
    vector<int>p=createTargetArray(nums,index);
    for(int w =0;w<nums.size();w++)
    {
        cout<<p[w]<<" ";    
    }
   
}    
