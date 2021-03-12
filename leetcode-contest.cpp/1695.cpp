#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vector<int>nums{4,2,4,5,6,4,25,8,4,8,3,89,3,4,2,5,2,78,2,62,2,521,423};
    vector<int>nums{4,2,4,5,6,4,25};
    int i,j=0,sum_old=0,sum_curr=0,pos_p=0,pos_c =0;

    
    
    sum_curr=nums[0];
    int temp =0;
    for(i=1;i<nums.size();i++)
    {
        for(j=pos_p;j<i;j++)
        {
            if(nums[j]==nums[i])
            {
                cout<<"j: "<<j<<" pos_p: "<<pos_p<<" i: "<<i<<endl;
                if(sum_old<sum_curr)
                {
                  sum_old=sum_curr;
                }
                for(pos_c=j;pos_c>=pos_p;pos_c--)
                {sum_curr-=nums[pos_c];}
                pos_p=j+1;
                cout<<"pos_p: "<<pos_p<<endl;
                temp=1;
                break;
            } 
        }
        sum_curr+=nums[i];
        cout<<"sum_curr: "<<sum_curr<<endl;
    }
    if(sum_old<sum_curr)
        {
            sum_old=sum_curr;
        }
    
    cout<<sum_old;
    return sum_old;
}