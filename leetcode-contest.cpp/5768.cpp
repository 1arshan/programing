#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int chalkReplacer(vector<int>& chalk, int k) {
        int i =0;
        int sum =accumulate(chalk.begin(),chalk.end(),0);
        while(k>sum)
        {k=k-sum;}
        while (chalk[i]<=k)
        {
            k=k-chalk[i];
            cout<<"k: "<<k;
            if(i>=chalk.size()-1)
            {
                i=0;
            }
            else
            {
                i++;
            }
            cout<<"; i: "<<i<<endl;
        }
        return i;
        
    }
};


int main()
{
    vector<int>chalk{80,51,68,32,60,89,79,56,18,17,70,22,57,47,60,36,60,27,73,47,20,18,47,72,67,37,33,56,92,76,32,18,37,10,20,64,6,81,90,44,77,70,97,81,17,72,45,17,55,44,45,4,12,99,54,24,10,100,48,34,93,58,57,18,100,20,33,20,16,61,79,95,79,37,11,13,30,63,60,93,26,50,43,44,95,8,91,66,75,8,62,65,11,20,9,58,62,67,77,90,77,14,12,19,78,92,82,40,64,37,57,70,93,4,38,28,53,91,17,90,73,21,45,12,96,98,36,63,25,88,46,98,54,50,64,88,91,34,29,42,85,35,34,25,9,100,70,9,33};
    int  k = 827500597;
    Solution t;
    cout<<t.chalkReplacer(chalk,k);
}