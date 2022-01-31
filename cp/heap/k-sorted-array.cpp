#include<bits/stdc++.h>
using namespace std;

void func(int pos,vector<int>&v,priority_queue<int>&hp)
{
    if(pos>=v.size())
    {
        return ;
    }
    else
        hp.push(-1*v[pos]);
}

int main()
{
    vector<int>v{6, 5, 3, 2, 8, 10, 9};
    int k=3;
    priority_queue<int>hp;
    int i,j,m=-1;
    for(i=0;i<k && i<v.size();i++)
    {
        hp.push(m*v[i]);
    }
    for(j=0;j<v.size();j++)
    {
        func(i++,v,hp);
        v[j]=m*hp.top();
        hp.pop();
    }

    for(auto x:v)
        cout<<x<<" ";


}