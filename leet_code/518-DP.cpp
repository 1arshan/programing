#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int>curr{0};
    int initialize(int amount, vector<int>& coins)
    {
        curr.resize(amount+1);
        for (auto x: curr)
            x=0;
        curr[0]=1;
        sort(coins.begin(),coins.end());
        return 0;
    }

    int change(int amount, vector<int>& coins) {
        initialize(amount,coins);
        for (auto x:coins)
        {
            for(int i=0;i<=amount;i++)
            {
                if (x<=i)
                {
                    curr[i]=curr[i-x]+curr[i];
                }

            }
            /*for(auto y:curr)
                cout<<y<<" ";
                cout<<endl;
            */
        }
        return curr[amount];
    }   
};


int main()
{
    vector<int>coins{10};
    int amount = 10;
    Solution t;
    cout<<t.change(amount,coins);


}