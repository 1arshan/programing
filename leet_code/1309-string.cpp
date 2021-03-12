#include<bits/stdc++.h>
using namespace std;


int reconversion(int s_p,int e_p,string &x)
{
    string temp;
    int c_to_i,i;
    for(i =s_p;i<e_p;i++)
    {
        temp=x[i];
        c_to_i=stoi(temp)+96;
        temp=c_to_i;
        x.replace(i,1,temp);
        //cout<<x<<endl;
    }
    return i+1;
}

int main()
{
    string x ="1326#";
    string temp="123445";
    int y;
    int s_p=0;
    int e_p=0;
    string z;
    //97
    int i;
    for(i =0;i<x.size();i++)
    {
        if(x[i]=='#')
        {
            //cout<<temp<<endl;
            temp=x[i-2];
            temp=temp+x[i-1];
            y=stoi(temp)+96;
            z=y;
            //cout<<z<<endl;
            x.replace(i-2,3,z);
            i=i-2;
            s_p= reconversion(s_p,i,x);
            
            cout<<"s_p: "<<s_p<<endl;
        }
    }
    if(s_p!=i){
        reconversion(s_p,x.size(),x);
    }
    cout<<x<<endl;
}