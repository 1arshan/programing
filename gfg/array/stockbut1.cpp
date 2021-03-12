#include<bits/stdc++.h>
using namespace std;
int p =0;;
int a[10] ={9,2,1,8,1,4,8,2,3,2};
vector<int>v;
int buy(int t)
{
    if(t >=10)
       { return 1;}
    if(a[t+1] >a[t])
    {   cout<<"buy "<<t<<endl;
        v.push_back(a[t]);
        p=t+1;
        
        return 1;
    }
    else
    {   
        buy(t+1);
        //p=t+1;
        return 1;
    }
    
}

int sell(int t)
{
    if(t>=10)
    {return 1;}
    if(a[t+1]<a[t])
    {   cout<<"sell "<<t<<endl;
        v.push_back(a[t]);
        p=t+1;
        return 1;
    }
    
    else
    {   
        
        sell(t+1);
        //p=t+1;
        return 1;
    }

}

int main()
{   int temp;
    
    //int a[10],p;
   /* cout<<"enter the daily price :";
    for(p =0;p<10;p++)
    {
        cin>>a[p];
    }*/
    p =0;
    while ((p!=10)||(p>10))
    {
        temp = buy(p);
        cout<<"p= "<< p<<endl;
        temp = sell(p);
        cout<<"p= "<< p<<endl;
    }cout<<"dasdas";
    if (v.size()%2==1)
    {
        v.pop_back();
    }
    cout<<"dasdas";
    for (vector<int>::iterator x=v.begin();x!=  v.end(); x++)
                {
                    cout<<*x<<" ";
                    //cout<<"fsdsfsdf";
                }

    
}