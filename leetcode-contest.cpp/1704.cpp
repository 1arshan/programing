#include<bits/stdc++.h>
using namespace std;

int v_cal(string &s,int end,int start)
{
    int v=0;
    cout<<" end: "<<end<<" start: "<<start<<endl;
    for(int i=start;i<end;i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        v++;
    }
    return v;
}


int main()
{
    string s ="MerryChristmas";
    int f_half=0,s_half=0;
    f_half=v_cal(s,s.size()/2,0);
    s_half=v_cal(s,s.size(),s.size()/2);
    //cout<<"f_half: "<<f_half<<" s_half: "<<s_half<<endl;
    if(f_half==s_half)
    return true;
    else
    {
        return false
    }
    
}