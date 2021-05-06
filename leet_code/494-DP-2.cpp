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
        cur.resize(target+1); 
        
        cout<<target<<endl;
        
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
            for (auto x:nums)
            {
                if (x>0)
                    break;
                else
                {
                    noz++;
                }
        }
        if (target==0)
            {
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
                    if (x+prev[i-x]>=prev[i])
                    {
                        cur[i]=x+prev[i-x];
                        if (cur[i] ==target)
                        {
                            //cout<<"if"<<endl;
                            count++;
                        }
                        else if(cur[i]>target)
                        {
                            //cout<<pow(2,noz)<<endl;
                            count=pow(2,noz)*count;
                            return count;
                        }
                    }
                    else{
                        cur[i]=prev[i];
                    }
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
        //cout<<count<<endl;
        count=pow(2,noz)*count;
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
    vector<int>nums{9,7,0,3,9,8,6,5,7,6};
    int target =2;

    TargetSum t(nums,target);
    cout<<t.count;
                                         
} 