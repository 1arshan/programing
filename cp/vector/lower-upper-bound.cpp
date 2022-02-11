#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v{2,1,3,5,6,6,4,2,4};
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
    auto it=upper_bound(v.begin(),v.begin()+2,2)-v.begin();
    cout<<it<<endl;
}