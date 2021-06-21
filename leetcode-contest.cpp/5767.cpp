#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool mycomp1(vector<int>& A, vector<int>& B)
{
    //if first element of first 
    //row<first element of second row
    if (A[0] < B[0])
        return true; //no swap
    //other wise swap the rows
    return false;
}

    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(ranges.begin(),ranges.end());
        //sort(ranges.begin(), ranges.end(), mycomp1);
        for (auto x:ranges)
        {
            if ((x[0]<=left) && (x[1]>=left))
            {   cout<<"x[0]: "<<x[0]<<"; left: "<<left<<endl;
                //left=x[1];
                if(x[1]>=right)
                {
                    return true;
                }
                else
                {
                    left=x[1]+1;
                }
            }

        }
        return false;
    }
};

int main()
{
    
    vector<vector<int>>ranges{{36,50},{14,28},{4,31},{24,37},{13,36},{27,33},{23,32},{23,27},{1,35}};
    int  left = 35, right = 40;
    Solution t;
    cout<<t.isCovered(ranges,left,right);
}