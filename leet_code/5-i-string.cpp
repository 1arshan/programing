#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string &s) {
        int i=0,j=0,k=0,new_len=0,max_len=1;
        int r_pos=0,l_pos=0;
        for(i=0;i<s.size();)
        {
            if(s.size()-i+1<=max_len/2)
                break;
            j=i,k=i;
            while (k<s.size()-1 && s[k+1]==s[k])
                k++;
            i=k+1;
            // cout<<"k: "<<k<<" j: "<<j<<endl;
            while (k<s.size()-1 && j>0 && s[k+1]==s[j-1])
            {
                // cout<<"dada"<<endl;
                j--;
                k++;
            }
            new_len=k-j+1;
            if(new_len>max_len)
                {
                    max_len=new_len;
                    // r_pos=k;
                    l_pos=j;
                }
            
        }
        // cout<<"l_pos: "<<l_pos<<" r_pos: "<<r_pos<<" max_len: "<<max_len<<endl;
        return s.substr(l_pos,max_len);
    }
};

int main()
{
    string s="abaaba";
    Solution t;
    string temp;
    temp=t.longestPalindrome(s);
    // cout<<temp.size();
    for(auto x:temp)
        cout<<x;
}