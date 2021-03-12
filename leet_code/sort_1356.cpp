#include<bits/stdc++.h>
using namespace std;


//int printing()


int counter(int x)
{
    int bt =0;
    while(x!=0)
    {
        bt+=x%2;
        x=x/2;
    }return bt;
}

bool sortbysec(const pair<int,int>&a,
                const pair<int,int>&b)
                {
                    return (a.second<b.second);
                }

 vector<int> sortByBits(vector<int>& arr) {
        int bt;
        vector<pair<int,int>>v;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            bt =counter(arr[i]);
            cout<<bt<<endl;
            v.push_back(make_pair(arr[i],bt));
        }
        
        stable_sort(v.begin(),v.end(),sortbysec);
        for(int i=0;i<arr.size();i++)
        {
            arr[i] =v[i].first;
        }
        
        return arr;
        

    }

int main()
{
    vector<int>arr ={0,4,2,3,4,5,9,6,7,8};
    sortByBits(arr);
    
}