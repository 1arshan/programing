#include<bits/stdc++.h>
using namespace std;
int len;
int base =97;
int hashing(string str1,int p)
{
char t;
int u ;
int sum=0;
for (int i =p;i<p+3||i<len-2;i++)
//while (p<len-2)
{
    t =str1[p];
    u=t;
    u =u-base;
    sum+=u;
    p++;   
}
sum =0;


}

int main()
{
    string str1,str2;
    cout<<"enter the sentnce: ";
    cin>>str1;
    len =str1.length();
    cout<<"enter the pattern to be search: ";
    cin>>str2;
    hashing(str1,0);
}