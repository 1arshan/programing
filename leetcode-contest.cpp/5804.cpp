#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string &s) {
        vector<int>nums(26,0);
        int t=0,temp=0;
        char y[]=" ";
        for(auto x:s)
        {
            y[0]=x;
            t=y[0];
            t=t-97;
            nums[t]++;

        }
        // for(auto x:nums)
        //     cout<<x<<" ";
        for(int i=0;i<nums.size()-1;i++)
        {
            // if(nums[i]!=nums[i+1] && nums[i]!=0 && nums[i+1]!=0)
            // {
            //     return false;
            // }
            if(nums[i]!=0)
            {
                if(nums[i+1]!=0)
                {
                    if(nums[i]!=nums[i+1])
                    {   
                        // cout<<"exit1"<<endl;
                        return false;
                    }
                }
                else
                {   temp=i+2;
                    while (temp<nums.size())
                    {
                        if(nums[i]!=nums[temp])
                        {
                            if(nums[temp]==0)
                            {
                                temp++;
                                continue;
                            }
                            // cout<<endl<<i<<" "<<temp<<endl;
                            // cout<<"exit2"<<endl;
                            return false;
                        }
                        else
                        {
                            i=temp-1;
                            break;
                        }
                        temp++;
                    }
                    
                }
            }
        }
        // if(nums[24]!=nums[25] && nums[25]!=0)
        //     return false;
        return true;
        
    }
};

int main()
{
    string s="aaccffggzzxx";
    Solution t;
    cout<<t.areOccurrencesEqual(s);
}