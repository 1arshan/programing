#include<bits/stdc++.h>
using namespace std;

int oddOccurrencesOfZeros(vector<int>a)
{
    int odd_number=0;
    //int odd_freq=0;
    unsigned long long element = 0;
    //cout<<a[0]<<endl;
    for(int i=0;i<a.size();i++)
    {
        
        //element=a[i];
        while (a[i] !=0)
        {
            if(a[i]%10==0)
            {
                if(element !=1)
                {element=1;}
                else
                {element=0;}

                

            }
            a[i]=a[i]/10;
            if(a[i]==0)
            break;

            
        }
        if (element ==1)
            {
                cout<<i<<endl;
                odd_number++;
            }
        element=0;
        
    }
    //cout<<odd_number;
    return odd_number;
}


int main()
{
    vector<int>a{100,2000,400,800,0,16010,3200,6400,12800};
    //cout<<"Dasdas"<<endl;
    int temp =oddOccurrencesOfZeros(a);
    //cout<<temp<<endl;
}