#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long double temp=0;
    //int temp_1=0;
    int removing_extra_zero(string &s)
    {   
        int i=0;
        while(i<s.size())
        {
            if (s[i]=='0')
                {
                //cout<<"1"<<endl;
                s.erase(0,1);
                }
            else
                return 1; 
        }
        return 1;
    }

    int spliting(string &s,int len)
    {

    }

    bool splitString(string &s) {
        removing_extra_zero(s);
        for()
        return true;
    }
};


int main()
{
    string s = "0000";
    Solution t;
    t.splitString(s);
    cout<<s<<endl;
}