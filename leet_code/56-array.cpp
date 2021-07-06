#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        int i=0,j=0;
        for(i=0;i+j<intervals.size()-1;i++)
        {
            //cout<<"i+j+1: "<<i+j+1<<endl;
            if(intervals[i][1]>=intervals[i+1+j][0])
            {
                if(intervals[i][1]<=intervals[i+1+j][1])
                {
                    intervals[i][1]=intervals[i+1+j][1];
                }
                j++;
                i--;
                //cout<<"i+j+1: "<<i+j+1<<endl;
            }
            else
            {
                //cout<<"j: "<<j<<endl;
                if(j>0)//think
                {
                    intervals[i+1][0]=intervals[i+1+j][0];
                    intervals[i+1][1]=intervals[i+1+j][1];
                }
            }
        }
        intervals.erase(intervals.begin()+i+1,intervals.end());
        // for(auto x:intervals)
        // {
        //     for(auto y:x)
        //     {
        //         cout<<y<<" ";
        //     }cout<<endl;
        // }
        return intervals;
    }
};

int main()
{
    vector<vector<int>>intervals{{8,10},{1,2},{1,3},{2,6},{15,18}};
    Solution t;
    t.merge(intervals);
}