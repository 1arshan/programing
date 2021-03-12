#include<bits/stdc++.h>
using namespace std;

int a[7] ={8,9,10,13,15,16,18};
int b[7] ={2,4,6,7,11,14,17};
int c[50];
int i,j,t;
int sorting()
{//cout<<c[t]<<endl;
    if(i<7 &&j<7)
    {
    if(a[i]>b[j])
    {   
        c[t] =b[j];
        cout<<c[t]<<" 1"<<endl;
        j++;
        
    }
    else
    {
        c[t] =a[i];
        cout<<c[t]<<" 2"<<endl;
        i++;

        
    }
    t++;
    sorting();
    }
    else if(i ==7 &&j !=7)
    {
        c[t] =b[j];
        cout<<c[t]<<" 3"<<endl;
        j++;
        t++;
        sorting();
    }
    else if( i!= 7 &&j==7)
    {
        c[t] =a[i];
        cout<<c[t]<<" 4"<<endl;
        i++;
        t++;
        sorting();
    }
    //t++;
    //sorting();
    return 1;
}

int main()
{
    sorting();
    for(i =0;i<=t;i++)
    {
        cout<<c[i]<<" ";
    }
}