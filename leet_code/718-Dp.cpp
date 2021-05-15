#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int>curr{0};
    vector<int>prev{0};
    int max=0;

    int initialize(vector<int>& nums1)
    {
        curr.resize(nums1.size()+1);
        prev.resize(nums1.size()+1);
        for (auto x:prev)
        x=0;
        return 0;
    } 

    int findLength(vector<int>& nums1, vector<int>& nums2) {
        initialize(nums1);
        for(auto x:nums2)
        {
            for(int i=1;i<curr.size();i++)
            {
                if(x==nums1[i-1])
                {
                    curr[i]=prev[i-1]+1;
                    if (curr[i]>max)
                    {
                        max=curr[i];
                    }
                }
                else
                {
                    curr[i]=0;
                }
            }
            prev=curr;
        }
        return max;
    }
};

int main()
{
    vector<int>nums1{};
    vector<int>nums2{};
    Solution t;
    cout<<t.findLength(nums1,nums2);
    

}