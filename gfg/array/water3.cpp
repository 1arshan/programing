#include<bits/stdc++.h>
using namespace std;
int a[10][10],b[10][10] ={0};
int wl[10];
int input_freq,wall_freq;
int waterquan(int j)
{int i =0,end=0,begin=0,freq=0;
    
    while(i<8)  
    
    {
        if(a[j][i] !=0)
        {   //cout<<"i ="<<i<<endl;
            end =i;
            freq++;
            if(freq ==1)
            begin =i;
            //cout<<a[j][i]<<endl;
            b[j][i] =1;
            a[j][i]=a[j][i]-1;
            
        }
        else
        {
            b[j][i] =0;
        }
        i++;
        
    }
    //cout<<"freq ="<<freq<<endl;
    //cout<<"begin ="<<begin<<endl;
    //cout<<"end ="<<end<<endl;
    if(freq ==0)
        {//cout<<"abc5"<<endl;
        return 1;}
    for(i =begin;i<end;i++)
    {//cout<<b[j][i]<<" "<<j<<endl;
        if(b[j][i]==0)
        wl[j]++;
    //cout<<"wl ="<<wl[j]<<endl;
    }
waterquan(j);
return 1;

    
}


int main()
{   
    cout<<"enter the numb of the time u want to enter the input"<<endl;
    cin>>input_freq;

    int i,j;
    for(j=0;j<input_freq;j++)
    {cout<<"enter no wall of "<<j+1<<" input"<<endl;
    cin>>wall_freq;
    for(i =0;i<wall_freq;i++)
    {
        cout<<"enter the wall height"<<endl;
        cin>>a[j][i]; 
    }
    }
    for(i=0;i<input_freq;i++)
    {
    waterquan(i);
    cout<<"wl["<<i<<"] ="<< wl[i]<<endl;
    }
    
}