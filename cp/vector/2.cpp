#include<bits/stdc++.h>
using namespace std;
int freq;


int frequency(int i)
{
    int size;
    cin>>size;
    int input;
    vector<int> v;
    for(int j =0;j<size;j++)
    {   cin>>input;
        v.push_back(input);
    }        
    reverse(v.begin(),v.end());
    for(int j =0;j<v.size();j++)
    {   cout<<v[j]<<" ";
        
    }
    cout<<endl;
    if(i+1<freq)
    frequency(i++);
    return 1;
}


int main()
{   int freq;
    cin>>freq;
    frequency(0);
}