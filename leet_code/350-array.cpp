#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int>h{0};
    vector<int> make_hash(vector<int>& nums1, vector<int>& nums2)
    {   
        //cout<<"sdfsdf"<<endl;
        int pos1=0,pos2=0,freq1=1,freq2=1,pos3=0,temp=0;
        while (pos1!=nums1.size()&& pos2!=nums2.size())//if array has only one element
        {   //cout<<"sdfsdf"<<endl;
            if(nums1[pos1]<nums2[pos2])
            {   
                //cout<<"if"<<endl;
                while (pos1<nums1.size() && nums1[pos1]<nums2[pos2])
                {
                    pos1++;
                }
                //cout<<"pos1: "<<pos1<<" size1: "<<nums1.size()<<endl;
                if(pos1==nums1.size())
                {
                    //cout<<"breaking1"<<endl;
                    break;
                } //abhi decide nhi hua hai

            }

            else if (nums1[pos1]==nums2[pos2])
            {
                //cout<<"common"<<"; pos1: "<<pos1<<"; pos2: "<<pos2<<endl;
                while (pos1+1<nums1.size() && nums1[pos1]==nums1[pos1+1])
            {
                freq1++;
                pos1++;
            }
            //element brabr nhi hai
            

            while (pos2+1<nums2.size() && nums2[pos2]==nums2[pos2+1])
            {
                freq2++;
                pos2++;
            }
            // freq2=1;
            // pos2++;
            temp=freq1>freq2?freq2:freq1;
            //cout<<"pos3: "<<pos3<<" temp+pos3: "<<temp+pos3<<endl;
            for(int i=pos3;i<temp+pos3;i++)
                nums1[i]=nums1[pos1];
            
            pos3=temp+pos3;

            freq1=1;freq2=1;
            pos1++;pos2++;
            //cout<<"common"<<"; pos1: "<<pos1<<"; pos2: "<<pos2<<endl;
            }


            else
            {
                //cout<<"else"<<endl;
                while (pos2<nums2.size() && nums1[pos1]>nums2[pos2])
                {
                    pos2++;
                }
                //cout<<"pos2: "<<pos2<<" size: "<<nums2.size()<<endl;
                if(pos2==nums2.size())
                {   //cout<<"breaking"<<endl;
                    break;} //abhi decide nhi hua hai
            }
            
            
        }
        //cout<<"pos3: "<<pos3<<endl;
        nums1.resize(pos3);
        for(auto x:nums1)
            cout<<x<<" ";
        return nums1;
        
        
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size()==0||nums2.size()==0)
        return h;
        //make hash
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if (nums1.size()<nums2.size())
        {make_hash(nums1,nums2);
        return nums1;
        }else
        {make_hash(nums2,nums1);
        return nums2;
        }
    }
};


int main()
{
    vector<int>num1{4};
    vector<int>num2{9};
    Solution t;
    t.intersect(num1,num2);
    // for(auto x:num2)
    //     cout<<x<<" ";
}