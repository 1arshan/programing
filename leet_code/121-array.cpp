#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i =0,j=0,k=0,pur=999999,sell=0,profit=0;
        while (i<prices.size()-1)
        {
            for(j=i;j<prices.size();j++)
            {
                if(pur>prices[j])
                {
                    pur=prices[j];
                    continue;
                }
                else
                {   
                    break;
                }
            }i =j;
            for(k=i;k<prices.size();k++)
            {
                if(sell<prices[k])
                {         
                    sell=prices[k];
                    continue;
                }
                else
                {
                    profit=profit+sell-pur;
                    sell=0;
                    pur=999999;
                    break;
                }
            }
            i=k;

        }
        if ((sell!=0)&&(pur !=999999))
        profit=profit+sell-pur;
        return profit;
        
    }
};

int main()
{
    vector<int>prices{7,6,4,3,1};
    Solution t;
    cout<<t.maxProfit(prices);
}