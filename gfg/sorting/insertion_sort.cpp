#include<bits/stdc++.h>
using namespace std;

int a[12] ={10,5,20,4,30,11,18,40,9,50,7,60};
int i=1,j,temp;


int checking()
{
    j =i;
    if(a[j-1]<temp)
    {
        a[j] =temp;
        return 1;
    }
    else
    {
        a[j] =a[j-1];
        j--;
    }

    if(j!= 0)
    {
        checking();
    }
    else
    {
        a[0] =temp;
    }
    return 1;
    
    
}


int sorting()
{
if(i<12)
{
    temp =a[i];
    checking();
    i++;
}
}

int main()
{
    sorting();
    for(i =0;i<12;i++)
    cout<<a[i]<<" ";
    
}