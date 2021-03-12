#include<bits/stdc++.h>
using namespace std;

int printing(vector<vector<int>> arr)
{int temp;
    for(int i=0;i<arr.size();i++)
    {   temp =arr[i].size();
        for(int j =0;j<temp;j++)
        {
            if(i%2 ==0)
            cout<<arr[i][j]<<" ";
            else
            {
                cout<<arr[i][temp-j-1]<<" ";
            }
            
        }
    }
}


int main()
{
    int r,c,temp;
    vector<vector<int>>arr;
    cout<<"no of rows: ";
    cin>>r;
    for(int i =0;i<r;i++)
    {
        vector<int>v;
        cout<<"element in "<<i+1<<" row: ";
        cin>>c;
        cout<<"enter element"<<endl;
        for(int j=0;j<c;j++)
        {   
            cin>>temp;
            v.push_back(temp);
        }arr.push_back(v);
    }
    printing(arr);

}