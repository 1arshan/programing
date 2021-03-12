#include<bits/stdc++.h>
using namespace std;
int p=0,q=0;
string str1 ="welcome to gfg";
string str2;

int pointer2()
{   //cout<<"q: "<<q<<endl;
    char t;
    int u;
    t =str1[q];
    u =t;
    if(u==32)
    {
        --p;

    }
    else if (q ==str1.length())
    {
        str2.push_back(str1[q]);
        --p;
    }
    
    else
    {
        str2.push_back(str1[q]);
        ++q;
        pointer2();
    }
    return 1;
}

int pointer1()
{
    char t;
    int u;
    t =str1[p];
    u =t;
    if(u==32)
    {
        q =p+1;
        pointer2();
        str2.push_back(' ');
    }
    else if (p ==0)
    {
        q =p;
        pointer2();
    }
    
    else
    {
        --p;
        pointer1();
    }
    if(p >0)
    pointer1();
    return 1;
}

int main()
{int len =str1.length();
    p =q =len;
    pointer1();
    //cout<<"sas"<<endl;
    cout<<"p: "<<p<<" q: "<<q<<endl;

    cout<<str2;
}