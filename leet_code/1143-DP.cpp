#include<bits/stdc++.h>
using namespace std;

class LCS
{
    public:
    vector<int> curr{0};
    vector<int> prev{0};
    int initialize(string &s)
    {
        curr.resize(s.size()+1);
        /*for (auto x: curr)
        {
            x=0;
        }*/

        prev.resize(s.size()+1);
        for (auto x: prev)
        {
            x=0;
        }

        //curr[1]=1;
        return 1;
    }
    int longestCommonSubsequence(string text1, string text2) {
        initialize(text1);
        int temp=0;
        for(auto x:text2)
        {
            for (int i=0;i<text1.size();i++)
            {
                if(x==text1[i])
                {
                    if(prev[i+1]-prev[i]<=0)
                    { 
                        cout<<"x: "<<x<<" i: "<<i<<endl;
                        curr[i+1]=prev[i+1]+1;
                    }
                }
                else
                {
                    if (curr[i+1]<curr[i])
                    {
                        curr[i+1]=curr[i];
                    }
                }

            }
            prev=curr;
            for(auto t:curr)
                cout<<t<<" ";
            cout<<endl;
        }
        return curr[text1.size()];
    }
};

int main()
{
    string text1 = "bmvcnwrmxcfcxabkxcvgbozmpspsbenazglyxkpibgzq";
    string text2 =  "bmpmlstotylonkvmhqjyxmnqzctonqtobahcrcbibgzgx";
    //string text1 = "cckco";
    //string text2 =  "koocc";
    LCS t;
    cout<<t.longestCommonSubsequence(text1,text2);
}