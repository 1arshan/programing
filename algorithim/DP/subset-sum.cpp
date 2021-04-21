#include<bits/stdc++.h>
using namespace std;

class SubsetSum
{
    public:
    vector<int> prev;
    vector<int> curr;
    vector<int> v;
    int sum;


    SubsetSum(vector<int>&vec,int s)
    {
        prev.resize(s);
        for (auto x:prev)
        {
            x=0;
        }
        curr.resize(s); 
        v=vec;
        sum=s;
    }

    int solve()
    {
        for (auto x:v)
        {
            for (int i=0;i<=sum;i++)
            {
                if (x >=i)
                {
                    curr[i]=x+prev[i-x];
                    if (curr[i]==sum)
                        return 1;
                    else if (curr[i] >sum)
                    {
                        return 0;
                    }
                }
                else
                {
                    curr[i]=prev[i];
                }

            }
            prev=curr;
        }
        return 0;
    }
  
};

int main()
{
    //vector<int>v{2,4,3,6,8,23,9,4,5,2,6,13,5,11,14,15};
    vector<int>v{2,3,5,7,8,13};
    sort(v.begin(),v.end());
    int sum=1;
    SubsetSum t(v,sum);
    cout<<t.solve();
    
    
}