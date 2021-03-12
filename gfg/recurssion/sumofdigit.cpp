//sum of digit if the number

#include<bits/stdc++.h>
using namespace std;
int sum;

int check(int in)
{
    if(in!=0)
    {   
        check(in/10);
        cout<<in<<" "<<sum<<endl;
        sum+=in%10;
        return in%10;
    }
    else
    {   sum =in%10;
        cout<<in<<sum<<endl;
        return in%10;
    }
    
}

int main()
{   int in;
    cout<<"enter the number";
    cin>>in;
    check(in);
    cout<<sum<<endl;
}