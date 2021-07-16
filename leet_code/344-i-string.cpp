#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp[]= {'t'};
        for(int i=0;i<s.size()/2;i++)
        {
            temp[0]=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=temp[0];
        }
        for(auto x:s)
        cout<<x<<" ";
    }
};

int main()
{
    vector<char>s{'h','o','l'};
    Solution t;
    t.reverseString(s);
}