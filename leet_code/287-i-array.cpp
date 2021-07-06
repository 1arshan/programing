#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[nums[0]];
        while (slow !=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        // slow =nums[0];
        slow=0;
        while (slow !=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        
        return fast;
        
    }
};

int main()
{
    vector<int>nums{1,3,4,2,2};
    Solution t;
    cout<<t.findDuplicate(nums);
}

