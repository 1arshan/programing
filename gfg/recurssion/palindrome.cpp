#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int f,s ,n; 

int fab(int i)
{int temp;
    temp=s;
    s=f+s;
    f=temp;
    cout<<s<<endl;
    if(i ==n)
    return 1;
    fab(i+1);
}

int main()
{
    cout<<"enter two stating number and the no of term in the series";
    cin>>f>>s>>n;
    cout<<f<<" "<<s;
    fab(1);
}