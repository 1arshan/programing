#include<bits/stdc++.h>
using namespace std;

void printing(vector<vector<int >>&arr)
{
    for(int i =0;i<arr.size();i++)
    {
        for(int j =0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

int rotate90(int i,int r,vector<vector<int>>&arr)
{   
    int diff1,diff2,act1,act2,temp1=0,temp2=0,next_i,next_j,temp3=0;
    next_i =next_j=i;
    int p_l =0;
    p_l =i+r-1;
    
    while (i<p_l)
    {next_i =i;
    diff1=p_l-i;
    diff2 =i-(p_l+1-r);
    act1=1;
    act2 =1;
    temp2 =arr[next_i][next_j];
    for(int j =0;j<4;j++)
    {   
        temp3 =temp2;
        if(act1==1)
        {   
            next_i+=diff1;
            //if(next_i==r-1)
            if(next_i==p_l)
            {act1 =0;
            
            }
            
        }
        else
        {   
            next_i-=diff1;
            if(next_i==p_l+1-r)
            act1=1;
            
        }

        if(act2==1)
        {    
            next_j+=diff2;
            if(next_j==p_l)
            act2 =0;
            
        }
        else
        {   
            next_j-=diff2;
            if(next_j==p_l+1-r)
            act2=1;
            
        }

        temp1=diff1;
        diff1 =diff2;
        diff2 =temp1;

    cout<<"next_i: "<<next_i<<" next_j: "<<next_j<<endl;
    cout<<"act1: "<<act1<<" act2: "<<act2<<endl;
        temp2 =arr[next_i][next_j];
        arr[next_i][next_j] =temp3;
     printing(arr);
     
     cout<<"j: "<<j<<" --------------------------"<<endl;   
    }
    i++;
    
    }
    cout<<"--------------------------"<<endl;
    return 1;
}

int preparing(int r,vector<vector<int>>&arr)
{
    
    for(int i =0;i<r;i++)
    {
        rotate90(i,r,arr);       
        r-=2;
        if(r==1||r==0)
        {
            break;
        }
       // printing(arr);
    }
    return 1;
}
int main()
{   
    int r=4,c=2,temp=0;
    vector<vector<int>>arr;
    for(int i =0;i<r;i++)
    {
        vector<int> v;
        for(int j=0;j<r;j++)
        {
            v.push_back(temp+1);
            temp++;
        }arr.push_back(v);
    }
    preparing(r,arr);
    printing(arr);
}