#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n<1)
    {
        return 1;
    }
    else
    {
        cout<<"else "<<n<< " ";
        fun(n-1);
        cout<<n<< " ";
        return 0;
    }
    
}

int main()
{
    fun(3);
}