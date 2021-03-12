#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="27346209830709182346";
    //int x =stoi(s);
    int max =0;
    int temp=0;
    string x;
    for(int i=0;i<s.size();i++)
    {   //x=s[i];
        //temp=stoi(x);
        temp=s[i]-48;
        if(max<temp)
        max =temp;
    }
    cout<<max;
}