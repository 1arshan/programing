#include<bits/stdc++.h>
#include <iostream> 
#include <algorithm> 
using namespace std;
int a[3][16] ={10,8,9,10,13,14,15,17,19,20,21,22,23,24,25,26};
int i =0,t =-1;
int b[16];

bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int computation()
{
    if(a[0][i]%2==0)
    {
        a[1][i] =1;
        if((i !=0)&&(a[1][i-1] ==0))
        {
            --t;
        }
        else
        {
            t =-1;
        }
        
    }
    else
    {
        a[1][i] =0;
        if((i !=0)&&(a[1][i-1] ==1))
        {
            --t;
            
        }
        else
        {
            t =-1;
            
        }
    }
    a[2][i] =t;
    b[i] =t;
    ++i;
    if(i==16)
    return 1;
    computation();
    return 1;
}

int main()
{
    computation();
    //int* it;
    //it =max_element(a+32,a+48,comp);
    //cout << *it<<endl; 

    int* i1;
    i1 =min_element(b,b+15); 
    //i1 =min_element(a,a+15); 
    //cout<<a<<" "<<a+32<<" "<<a+48;
    cout << *i1 << "\n"; 
    return 0; 
}