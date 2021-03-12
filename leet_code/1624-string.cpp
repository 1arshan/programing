#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s ="ab";
    int a[26]={0},i=0;
    int temp;
    int diff=-1;
    int diff1=0;
    char s_to_i;
    for(i=0;i<s.size();i++)
    {
        temp=s[i];
        temp-=97;
        if(a[temp]==0)
        {
            a[temp]=i+1;
        }   
        else
        {
            diff1=i-a[temp];
            if(diff<diff1)
            {diff=diff1;}
        }
        
        
    }cout<<diff<<endl; 
}