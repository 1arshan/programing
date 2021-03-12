#include<bits/stdc++.h>
using namespace std;

void printing(vector<vector<int >>&arr)
{
    for(int i =0;i<arr.size();i++)
    {
        for(int j =0;j<arr[i].size();j++)
        {
            cout<<arr[i][j];
        }
    }
}

int main()
{
    int m =3,n =2;
    vector<vector<int>>arr;
    for(int i =0;i<m;i++)
    {
        vector<int>v;
        for(int j =0;j<n;j++)
        {
            v.push_back(j+1);
        }arr.push_back(v);
    }
    printing(arr);
    
}