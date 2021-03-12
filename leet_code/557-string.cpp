#include<bits/stdc++.h>
using namespace std;

int reversal(int s_p,int e_p,string &s)
{
    char temp{1};
    for(int i =0;i<=(e_p-s_p)/2;i++)
    {
        temp =s[e_p-i];
        s[e_p-i]=s[s_p+i];
        s[s_p+i]=temp;
    }
    return 0;
}

int main()
{
    string s ="Let's take LeetCode contest";
    int i,s_p=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            reversal(s_p,i-1,s);
            s_p =i+1;
        }
    }
    reversal(s_p,s.size()-1,s);
    cout<<s<<endl;
}