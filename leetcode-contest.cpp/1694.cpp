#include<bits/stdc++.h>
using namespace std;

int main()
{
    string number ="--1 7--52-9 35  39-4--755 - ";
    int i =0;
    int p_pos=0,n_pos=0;
    //for(auto i =number.begin();i!=number.end();i++)
    for(i=0;i<number.size();i++)
    {
        
        if(number[i]=='-'||number[i]==' ')
        {
            number.erase(i,1);
            --i;
        }
        
        else
        {
            if(i-p_pos==4)
            {
                number.insert(p_pos+3,1,'-');
                //i++;
                p_pos=i;
                //cout<<"p_pos: "<<p_pos<<" char: "<<number[p_pos]<<endl;
            }
        }
    }

    if(i-p_pos==4)
    {
        number.insert(p_pos+2,1,'-');
        //i++;
        p_pos=i;
        //cout<<"p_pos: "<<p_pos<<" char: "<<number[p_pos]<<endl;
    }
    return number;
    //cout<<number<<endl;
}