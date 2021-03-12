#include<bits/stdc++.h>
using namespace std;

int a[2][26]={0};
int base =97;
int compute(string temp,int pos)
{   //cout<<"pos: "<<pos<<" ; "<<temp[pos-1]<<endl;
    char t;
    int u;
    t =temp[pos-1];
    u =t;
    if(a[0][u-base] ==0)
        a[0][u-base] =pos;
    a[1][u-base] +=1;
    if(pos <temp.length())
        compute(temp,pos+1);
    return 1;


}

int finding(string x,int t)
{   cout<<"t: "<<t<<endl;
    for(int i=0;i<26;i++)
    {cout<
        if(a[0][i]==t)
        {   cout<<i<<endl;
            cout<<a[1][i]<<endl;
            if (a[1][i] >1)
            cout<<"l_e: "<<i<<endl;
            
        }break;
    }
    if( t <x.length()-2)
    finding(x,++t);
    return 1;
}

int main()
{   string x="dbcabc";
    //string x="qwertyjklhjkhjkjlklkjhgfdsazxcvbnmga";
    compute(x,1);
    for(int i =0;i<26;i++)
    {
        cout<<a[0][i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<26;i++)
    {
        cout<<a[1][i]<<" ";
    }cout<<endl;
    finding(x,1);
    
    
}