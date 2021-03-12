#include<bits/stdc++.h>
using namespace std;
int size;
int a[11];
int b =0,e =0,wl=0;

int starting()
{
    for(int a =b;a<e;a++)
    {
        if(a[a] !=0)
        {b =a;
        return 1;}
    } return 0; 
}

int ending()
{
    for(int a =b;a<e;a++)
    {
        if(a[size-a] !=0)
        {e =size-a;
        return 1;}
    }return 0;
}
int check()
{
    
    int temp = starting();
    ending;
    return temp;
}

int measure()
{
    for(int a =b;a<e;a++)
    {
        if(a[a]==0)
        wl++;

    }
    return 1;
}

int reheighting()
{
 for(int a =b;a<e;a++)
 {
     a[a]=a[a]-1;
 }  return 1; 
}

int main()
{   int temp =1;
    cout<<"enter the size\n";
    cin>>size;
    e =size;
    cout<<"enter each wall height\n";
    int input;
    for(int a =0;a<size;a++)
    {   cout<<"i ="<<a<<endl;
        cin>>a[a];
    }
    while(temp !=0)
    {cout<<"wheel";
    temp = check();
    if(b ==e||temp ==0)
    break;
    measure();
    reheighting();   
    }
    cout<<wl;
}