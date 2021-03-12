#include<bits/stdc++.h>
using namespace std;
int c[50] ={2,3,5,4,9,8,11};
int i,j;
int merge_sort(int pos_s,int pos_i,int pos_e)
{

}

int sorting(int pos_s,int pos_i,int pos_e)
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
    sorting(int pos_s,int pos_i,int pos_e);
    }
    else if(i ==size1 &&j !=size2)
    {
        c[t] =a[j+pos_i+1];
        j++;
        t++;
        sorting(int pos_s,int pos_i,int pos_e);
    }
    else if( i!= size1 &&j==size2)
    {
        c[t] =a[i+pos_s];
        i++;
        t++;
        sorting(int pos_s,int pos_i,int pos_e);
    }
    return 1;
}


int main()
{
    merge_sort(3,4,6);
}