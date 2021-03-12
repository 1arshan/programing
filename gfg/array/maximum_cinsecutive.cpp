#include<bits/stdc++.h>
using namespace std;

vector<int> a;
int v[] ={0,1,1,1,1,0,1,1,0,0,1,1,1};
int freq =0;
int find(int i)
{
    if(i<13)
    {
        if(v[i] ==1)
        {
            freq++;
            find(i+1);
        }
        else
        {
            a.push_back(freq);
            freq =0;
            find(i+1);            
        }
        
    }
    else
    {//cout<<"asas"<<endl;
    a.push_back(freq);
    return 1;
}
}


int main()
{
 //vector<int>::iterator it;
 //int t =v.size();
 //cout<<"sieze of v ="<<t<<endl;
    find(0);
    for(vector<int>::iterator p =a.begin();p !=a.end(); ++p)
                {
                    cout<< *p <<" ";
                }

cout<<endl<<*max_element(a.begin(),a.end());
}

