#include<bits/stdc++.h>
using namespace std;

int rearrange_vector(vector<int>&nums,int pos)
{
    int left=0,right=0;
    int temp=0;

    /*
    for(right=pos;right<nums.size()-1;right++)
    {
        temp=temp+(nums.size()-1-right)*(nums[right]);
    }
    for(left=pos-1;left>=0;left--)
    {
        temp=temp+(left+1)*(nums[left]);
    }*/
    return temp;
}

int main()
{
    vector<int>nums{1,4,6,8,10};
    int i;
    vector<int>v(nums.size());
    for(i=1;i<nums.size();i++)
    {
        nums[i-1]=nums[i]-nums[i-1];
    }nums[nums.size()-1]=0;
    int x=0,y=0;
    for(i=0;i<nums.size()-1;i++)
    {
        x=x+(nums.size()-1-i)*(nums[i]);        
    }v[0]=x;
    for(i=1;i<nums.size();i++)
    {
        x=x-(nums[i-1]*(nums.size()-i));
        y=y+(i)*(nums[i-1]);
        v[i]=x+y;
    }
    for(i=0;i<nums.size();i++)
    {
        cout<<v[i]<<endl;
    }

}