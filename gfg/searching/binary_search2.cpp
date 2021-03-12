o#include<bits/stdc++.h>
using namespace std;
int a[50];
int size,s,temp =0,freq =0,found;
int pos_st,pos_ed,pos_hf,total,pos,value;


int rechecking()
{
    int i=1;
    while(i==1)
    {
        if(a[found-i]==s)
        {
            found-=1;
        }
        else
        {
            return 1;
        }
        
    }
}

int searching()
{
    //int pos_st,pos_ed,pos_hf,total,index,value;    
    total =pos_ed -pos_st +1; 
    pos_hf =total/2;
    pos =pos_hf +pos_st;
    value =a[pos];
    if(pos==1||freq>1)
    {
        freq++;
        if(a[0]==s)
        found =0;
        return 1;
    }
    cout<<pos_ed<<" "<<pos_st <<" "<<value<<endl;
    if(value ==s)
    {   /*if(value ==s)
        {found =pos;
        pos_ed =pos;
        temp++;
        cout<<pos_ed<<" "<<pos_st<<endl;
        //return 1;
        if(pos ==1)
        {
            if(a[0]==s)
            found =0;
            
            return 1;
        }
        else
        {
            searching();
        }
        return 1;
        }*/
        cout<<value<<endl;
        found =pos;
        rechecking();
        return 1;

    }
    else
    {
        if(value >s)
        {   
            pos_ed = pos;
            searching();
        }
        else
        {   
            pos_st= pos;
            searching();
        }
        return 1;
    }
    return 1;
}
/*
int rechecking()
{
    int i=1;
    while(i==1)
    {
        if(a[found-i]==s)
        {
            found-=1;
        }
        else
        {
            return 1;
        }
        
    }
}*/
int main()
{   int i;
    cout<<"enter the number of element: ";
    cin>>size;
    cout<<"enter the element: ";
    for(i =0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element u want to search";
    cin>>s;
    pos_ed= size-1;
    //cout<<pos_ed<<" "<<pos_st<<endl;
    searching();
    cout<<"index of "<<s<<"is "<< found<<endl; 
    
}