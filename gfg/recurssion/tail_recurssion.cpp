#include<bits/stdc++.h>
using namespace std;
int prod =1;
int fun(int n)
{
    if(n ==0)
    return 1;

    fun(n-1);
    prod *=n;
    cout<<n<<endl;
}

int main()
{   int in;
    cout<<"enter the end number";
    cin>>in;
    fun(in);
    cout<<prod;
}