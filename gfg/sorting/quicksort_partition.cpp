#include<bits/stdc++.h>
using namespace std;
int a[] ={1,12,9,8,7,11,5,4,3,6};
int i=0,j=0,size =10,pivot;
int quick_partition(int index)
{int temp;
    if(a[j]<a[index])
    {
        
        temp =a[j];
        a[j] =a[i];
        a[i] =temp;
        i++;
        if(a[j] ==pivot)
        {
            index =j;
        }
        j++;
    }
    else
    {
        j++;
    }
    
    if(j <size)
    quick_partition(index);
    else 
    {   
        temp =a[index];
        a[index] =a[i];
        a[i] =temp;
        pivot =i;
        
    }
    
    return 1;
}


int divide(int pos_s,int pos_e)
{   int pos_i,temp,total,half;
    total =pos_e -pos_s +1;
    half =total/2;
    pos_i=pos_s +half -1;
    i =j =pos_s;
    pivot =a[pos_i];
    
    
    if((pos_e -pos_s)>1)
    {
        quick_partition(pos_i);
        pos_i =pivot;
        divide(pos_s,pos_i);
        divide(pos_i+1,pos_e);
    }   
    else
    {
        if(a[pos_s]>a[pos_e])
    {   temp =a[pos_s];
        a[pos_s] =a[pos_e];
        a[pos_e] =temp;
    
    }
        
    }
    return 1;
}




int main()
{
   
    divide(0,size-1);
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}