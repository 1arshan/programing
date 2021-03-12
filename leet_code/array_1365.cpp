#include<bits/stdc++.h>
using namespace std;
vector<int> v_final(50);
vector<pair<int,int>>v_pair;

int i=0,j=0,size,pos;

int rearrangement()
{
    if(j==0)
    {  
        pos =v_pair[i].second;
        v_final[pos] =j;
        cout<<"1: "<<"j: "<<j<<"i: "<<i<<endl;
        i++;
        j=i;
        
    }
    if(v_pair[j-1].first ==v_pair[j].first &&j !=0)
    {   cout<<"2: "<<endl;
        j--;    
    }
    else
    {   
        if(i<size)
       { pos =v_pair[i].second;
        v_final[pos] =j;
        cout<<"3: "<<j<<endl;
        i++;
        j =i;
        }
    }
    if(i<size)
    {
        rearrangement();
    }
    return 1;
    
}


int main()
{

   vector<int> v ={7,7,7,7};
   size =v.size();
   for(i =0;i<v.size();i++)
   {
       v_pair.push_back(make_pair(v[i],i));
   }
   sort(v_pair.begin(),v_pair.end());
   
   j =i=0;
   rearrangement();
   cout<<"final result"<<endl;
   for(i =0;i<v.size();i++)
   {    
       
        cout<<v_final[i]<<endl;
       
   }
    
}