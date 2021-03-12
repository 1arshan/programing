#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s ="1111";
    int a[s.size()];
    int i ;
    if(s[0]=='0')
    {
        a[0]=1;
    }
    else
    {
        a[0]=0;
    }
    
    for(i=1;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            a[i]=a[i-1]+1;
        }
        else
        {
            a[i]=a[i-1];
        }
        
    }
    int max=0,temp;
    for(i=0;i<s.size()-1;i++)
    {
        temp=a[i]+(s.size()-(i+1))-(a[s.size()-1]-a[i]);
        if (temp>max)
        max=temp;
    }
    cout<<max<<endl;
}