#include<bits/stdc++.h>
using namespace std;

class TargetSum
{
    public:
    int sum=0;
    vector<int>prev;
    vector<int>cur;
    int count =0;
    int noz =0;
    //vector<int>

    TargetSum(vector<int>&nums,int target)
    {
        sum_v(nums);
        sort(nums.begin(),nums.end());
        if (sum%2==0)
        {
            if (target%2==1)
            {
                sum =-1;
            }
        }
        else
        {
            if (target%2==0)
            {
                sum =-1;
            }
        }
        target=(sum-target)/2;
        prev.resize(target+1);
        for (auto x:prev)
            x=0;
        prev[0]=1;
        cur.resize(target+1); 
        
        //cout<<target<<endl;
        
        //    return 1;
        find_ways(nums,target);
    }

    int find_ways(vector<int>nums,int target)
    {
        if (target>sum)
            return 0;
        if (target==0 && nums[0]!=0)
            {count=1;
            return 1;}
        else if (nums[0]==0)
        {
            //for (auto x:nums)
            for (int i=0;i<nums.size();i++)
            {
                //cout<<"x: "<<x<<endl;
                if (nums[i]>0)
                    break;
                else
                {
                    nums.erase(nums.begin());
                    i--;
                    noz++;
                }
        }
        if (target==0)
            {
                cout<<noz<<endl;
                count=pow(2,noz);
                return count;
            }   
        }

        for (auto x:nums)
        {
            for (int i =0;i<=target;i++)
            {
                if (x<=i)
                {
                    cur[i]=prev[i-x]+prev[i];
                }
                else
                {
                    cur[i]=prev[i];
                }
            }prev=cur;
            cout<<x<<": ";
            for (auto x:prev)
            {
                cout<<x<<" ";
            }cout<<endl;

        }
        //cout<<prev[target]<<endl;
        count=pow(2,noz)*prev[target];
        return count;

    }

    int sum_v(vector<int>nums)
    {
       for (auto x:nums)
       {
           sum+=x;
       } 
       
    }
};


int main()
{
    vector<int>nums{0,0,0,0,0,0,0,0,1};
    int target =1;

    TargetSum t(nums,target);
    cout<<t.count;
                                         
} 