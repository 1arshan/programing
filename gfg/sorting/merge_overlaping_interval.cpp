#include<bits/stdc++.h>
using namespace std;
//int a[2][10] ={1,12,9,8,7,11,5,4,3,6,0,1,2,3,4,5,6,7,8,9};
int a[2][10] ={1,2,4,5,6,7,8,11,12,15,3,4,6,7,8,9,11,13,14,16};
int i=0,j=0,size =10,pivot;

int MOL()
{  
    if(a[0][i]<a[0][i+1] &&a[1][i]>a[0][i+1])
    {
        if(a[1][i+1] >a[1][i])
        {
            a[1][i] =0;
            a[0][i+1] =a[0][i];
            a[0][i] =0;
        }
        else
        {
            a[0][i+1] =a[0][i];
            a[0][i] =0;
            a[1][i+1] =a[1][i];
            a[1][i] =0; 

        }
        
    }
    i++;
    if(i+1 <size)
    {
        MOL();
    }
    return 1;
    
}

int quick_partition(int index)
{int temp1,temp2;
    if(a[0][j]<a[0][index])
    {
        
        temp1 =a[0][j];
        a[0][j] =a[0][i];
        a[0][i] =temp1;
        temp1 =a[1][j];
        a[1][j] =a[1][i];
        a[1][i] =temp1;
        i++;
        if(a[0][j] ==pivot)
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
        temp1 =a[0][index];
        a[0][index] =a[0][i];
        a[0][i] =temp1;
        temp1 =a[1][index];
        a[1][index] =a[1][i];
        a[1][i] =temp1;
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
    pivot =a[0][pos_i];
    
    
    if((pos_e -pos_s)>1)
    {
        quick_partition(pos_i);
        pos_i =pivot;
        divide(pos_s,pos_i);
        divide(pos_i+1,pos_e);
    }   
    else
    {
        if(a[0][pos_s]>a[0][pos_e])
    {   temp =a[0][pos_s];
        a[0][pos_s] =a[0][pos_e];
        a[0][pos_e] =temp;
        temp =a[1][pos_s];
        a[1][pos_s] =a[1][pos_e];
        a[1][pos_e] =temp;
    
    }
        
    }
    return 1;
}




int main()
{
   
    divide(0,size-1);
    i =j =0;
    MOL();
    for(i=0;i<size;i++)
    {
        cout<<a[0][i]<<" ";
    }cout<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[1][i]<<" ";
    }

}