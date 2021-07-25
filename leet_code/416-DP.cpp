#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum=0;
    vector<int>v{0};

    bool vector_sum(vector<int>& nums)
    {
        for(auto x:nums)
            sum+=x;
        if(sum%2==1)
            return false;
        sum=sum/2;
        // cout<<"sum: "<<sum<<endl;
        v.resize(sum);
        for(auto x:v)
            x=0;
        return true;
    }

    int recDp(vector<int>& nums,int target,int n)
    {
        cout<<"target: "<<target<<" n: "<<n<<" v[target-1]: "<<v[target-1]<<endl;
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
        if(target==0||n==0)
            return 0;
        
        if(v[target-1] !=0)//modification to have 1d array
        {
            // cout<<"target: "<<target<<" n: "<<n<<" v[target-1]: "<<v[target-1]<<endl;
            return v[target-1];
        }

        if(nums[n-1]<=target)
        {
            return v[target-1]=max(nums[n-1]+recDp(nums,target-nums[n-1],n-1),recDp(nums,target,n-1));
        }
        else
        {
            // cout<<"target: "<<target<<" n: "<<n<<endl;
            return  v[target-1]=recDp(nums,target,n-1);
        }
    }

    bool canPartition(vector<int>& nums) {
        int s=0;
        s =vector_sum(nums);
        if(s==0)
            return false;
        sort(nums.begin(),nums.end());
        // cout<<"sum: "<<sum<<" n: "<<nums.size()<<endl;
        recDp(nums,sum,nums.size());
        // for(auto x:v)
        //     cout<<x<<" ";
        if(sum==v[sum-1])
            return true;
        else
            return false;
        // cout<<v[sum-1];
        
    }
};

int main()
{
    vector<int>nums{1,5,11,5};
    Solution t;
    // t.canPartition(nums);
    cout<<t.canPartition(nums);
}