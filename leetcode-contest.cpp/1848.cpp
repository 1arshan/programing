#include<bits/stdc++.h>
using namespace std;

class Sol
{
    public:

    int getMinDistance(vector<int>& nums, int target, int start) {
        int i,found=-1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                if (i>=start)
                {
                    //found=i;
                    //cout<<"i>=start"<<endl;
                    return i-start;
                }
                else
                {
                    //cout<<"i<start"<<endl;
                    for(int j=i;j<2*start-i &&j<nums.size();j++)
                    {
                        if(nums[j]==target)
                        {
                            
                            found =j;
                            i=j;
                            //cout<<"found: "<<found<<endl;
                        }
                         
                    }
                    return found>=start ? found-start:start-found;
                }
            }
        }
        if (found==-1)
        {
            return -1; 
        }
        int x =found>=start ? found-start:start-found; 
        return x;
    }
};

int main()
{
    vector<int>nums{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    //vector<int>nums{1,2,5,2,5,8,3,2,568,9,3,3,5,84,2,2,5,24,6,8,90,8};
    int target = 1, start = 9;
    Sol t;
    cout<<t.getMinDistance(nums,target,start);
}