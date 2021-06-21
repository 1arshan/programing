#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size();
        char temp;
        for(int i =0;i<s.size()/2;i++)
        {
            temp=s[i];
            s[i]=s[size-1-i];
            s[size-1-i]=temp;
        }
    }
};

int main()
{
    vector<char>s{'h','e','l','l','o'};
    Solution t;
    t.reverseString(s);
}