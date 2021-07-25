#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int decv(vector<int>&t_left,int i)
    {//improve
        int temp=0;
        for(int j=0;j<=i;j++)
        // for(auto x:t_left)
        {
            if(t_left[j]!=0)
            {
                if(t_left[j]==1 && temp==0)
                {
                    
                }
                t_left[j]--;
            }

        }
        return 1;
    }

    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int ta=times[targetFriend][0];
        int i=0;
        sort(times.begin(),times.end());
        vector<int>t_left(times.size(),0);
        while (times[i][0]!=ta)
        {
            decv(t_left,i);

            
        }
        
        return 1;
    }
};

int main()
{
    vector<vector<int>>times{{3,10},{1,5},{2,6}};
    int target=0;
    Solution t;
    t.smallestChair(times,target);
}