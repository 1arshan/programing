#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m=6,n=3;
    vector<int>nums1{1,2,3,0,0,0};
    vector<int>nums2{2,5,6};
    priority_queue<int>hp;
    int p1=0,p2=0,i,mul=-1;
    for(i=0;i<m;i++)
    {
        if(nums1[i]==0)
        {   
            while (!hp.empty())
            {
                nums1[i++]=hp.top()*mul;
                cout<<hp.top()*mul<<endl;
                hp.pop();
            }
            while(p2<n)
                nums1[i++]=nums2[p2++];
            break;
        }
        else
            hp.push(nums1[i]*mul);
        while (p2<n && nums1[i]>=nums2[p2])
        {
            hp.push(nums2[p2++]*mul);
        }
        nums1[i]=hp.top()*mul;
        hp.pop();
        
    }

    for(auto x:nums1)
        cout<<x<<" ";
}