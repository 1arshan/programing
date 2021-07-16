#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string &s) {
        if(s.size()==0)
            return "";
        if(s.size()==1)
            return s;
        int i=0,ml_pos=0,mr_pos=0,len=0,m_len=1;
        int l_pos=0,r_pos=0;
        for(i=1;i<s.size();)
        {
            l_pos=i-1;r_pos=i+1;
            while (i<s.size()-1 && s[i+1]==s[i])//last index
            {
                // l_pos--;
                r_pos++;
            }
            while (l_pos>=0 &&r_pos<s.size()&&s[l_pos]==s[r_pos])//last index
            {
                l_pos--;
                r_pos++;
            }
            if(m_len<())
            
        }
    }
};

int main()
{
    string s = "babad";
    Solution t;
    t.longestPalindrome(s);
}