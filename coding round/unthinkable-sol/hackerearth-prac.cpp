#include<bits/stdc++.h>
using namespace std;



int main()
{
    int freq=0,i=0,j,num=0;
    cin>>freq;
    for(i=0;i<freq;i++)
    {
        cin>>num;
        for(j=1;j<=num;j++)
        {
            if(j%5==0 &&j%3==0)
            {
                cout<<"FizzBuzz"<<endl;
            }
            else if(j%5==0)
            {
                cout<<"Buzz"<<endl;
            }
            else if(j%3==0)
            {
                cout<<"Fizz"<<endl;
            }
            else
            {
                cout<<j<<endl;
            }
        }
    }
}