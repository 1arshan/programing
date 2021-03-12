#include<bits/stdc++.h>
using namespace std;


int main()
{
    //vector<int>apples{1,2,3,5,2,5,6,5,2,9,1,6,2,7,3,8};
    //  vector<int>days{3,2,1,4,2,3,3,7,1,4,1,9,4,2,7,4};
    vector<int>apples{1,2,3,5,2,5,6,5,2,9,1,6,2,7,3};
      vector<int>days{3,2,1,4,2,3,3,8,1,4,1,9,4,2,7};
    int apple_eat=0,d=0;

    for(int i=0;i<apples.size();i++)
    {
        days[i]-=d;
        if(days[i]<=0)
        {   d--;
            cout<<"apple_eat: "<<apple_eat<<" d: "<<d<<" i: "<<apples[i]<<endl;
            continue;}
        if(days[i]>=apples[i])
        {
            apple_eat+=apples[i];
        }
        //else if(days[i]>apples[i])
        //{
          //  apple_eat+=apples[i];
        //}
        else
        {
            apple_eat+=days[i];
        }
        
        if(days[i]>1&&apples[i]>1)
        {
            if(d>1)
            d=days[i]-2+d;
            else
            {
                d=days[i]-1;
            }
            
        }
        else
        {
            //d=0;
            d=d--;
        }
        cout<<"apple_eat: "<<apple_eat<<" d: "<<d<<" i: "<<apples[i]<<endl;    
    }
    cout<<"apple_eat: "<<apple_eat<<endl;
}   