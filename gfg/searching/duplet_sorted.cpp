#include<bits/stdc++.h>
using namespace std;
int a[50];
int size,i,j,x,sum;

int solving()
{//int x;
    if(a[i]+a[j] ==sum)
    {   cout<<a[i]<<" "<<a[j]<<endl;
        x =1;
        return x;
    }
    else if(a[i]+a[j]>sum)
    {
        j-=1;
    }
    else if(a[i]+a[j]<sum)
    {
        i+=1;
    }
    if(i ==j)
    return x;
    else
    {
        solving();
    }
    
    return x;
    
}

int main()
{
    cout<<"enter the size of element"<<endl;    
    cin>>size;
    cout<<"enter the element"<<endl;
    for(i =0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"sum u watn to find"<<endl;
    cin>>sum;
    i =0;j=size-1;
    int t = solving();
    if(t!=0)
    cout<<a[i] <<" "<<a[j]<< " "<<endl;
    else
    {
        cout<<"no pair found"<<endl;
    }
    
}