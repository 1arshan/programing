#include <bits/stdc++.h>
using namespace std;

int a[50];
int size,found;

int check(int i)
    {if(i<=size/2)
    {cout<<a[i];
    if(a[i]==a[i+size/2])
    {found =a[i];
    return 1;
    }
    else
    {
        check(i+1);
    }
    }
    return 1;
    }
int main()
{   int i;
    cout<<"enter the number of element"<<endl;
    cin >> size;
    cout<<"enter the elemtn"<<endl;
    
for(i =0;i<size;i++)
{

    cin>>a[i];
}

sort(a,a+size);

check(0);
cout<<endl<<found;
}