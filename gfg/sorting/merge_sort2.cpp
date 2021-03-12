#include<bits/stdc++.h>
using namespace std;
int a[50];
int c[50],i,j,t;
int size;


int merge_sorting(int pos_s,int pos_i,int pos_e)
{
    int size1 =pos_i-pos_s+1;
    int size2 =pos_e-pos_i;
    if(i<size1 &&j<size2)
    {
    if(a[i+pos_s]>a[j+pos_i+1])
    {   
        c[t] =a[j+pos_i+1];
        j++;       
    }
    else
    {
        c[t] =a[i+pos_s];
        i++;
    }
    t++;
    merge_sorting(pos_s,pos_i,pos_e);
    }
    else if(i ==size1 &&j !=size2)
    {
        c[t] =a[j+pos_i+1];
        j++;
        t++;
        merge_sorting(pos_s,pos_i,pos_e);
    }
    else if( i!= size1 &&j==size2)
    {
        c[t] =a[i+pos_s];
        i++;
        t++;
        merge_sorting(pos_s,pos_i,pos_e);
    }
    return 1;
}



int divide(int pos_s,int pos_e)
{   int pos_i,total,half,temp;
    if((pos_e -pos_s)>1)
    {
        total =pos_e -pos_s +1;
        half =total/2;
        pos_i =pos_s +half -1;
        divide(pos_s,pos_i);
        divide(pos_i+1,pos_e);
        merge_sorting(pos_s,pos_i,pos_e);
        for(i =0;i<t;i++)
        {
            a[pos_s+i] =c[i];
        }i=j=t=0;

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
    int i;
    cout<<"total number of number to be sorted: ";
    cin>>size;
    cout<<"enter the numer to sort"<<endl;
    for(i =0;i<size;i++)
    {
        cin>>a[i];
    }
    divide(0,size-1);
   
   
        for(i =0;i<size;i++)
        {   
            cout<<a[i]<<" ";
        }cout<<endl;
   
}