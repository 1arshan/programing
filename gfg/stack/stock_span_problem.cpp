#include<bits/stdc++.h>
using namespace std;

int stock(int a[],int b[], int i)
{   int temp;
    int freq =1;
    //cout<<i<<endl;
    if(i <11)
    {
        for (temp = i-1; temp >=0; temp--)
        {   //cout<<"temp: "<<temp<<endl;
            if(a[i]>a[temp])
            {
                ++freq;
            }
            else
            {
                b[i] =freq;
            }
            if(temp ==0)
            {
                b[i] =freq;
            }
        }
        
        
        stock(a,b,++i);
    }
    else
    {
        return 1;
    }
    
}

int main()
{
    int a[]={15,13,12,14,16,3,6,3,4,10,30};
    int b[11];
    b[0] =1;
    stock(a,b,1);
    for(int i =0;i<11;i++)
    cout<<b[i]<<" ->";
}