#include<bits/stdc++.h> 
using namespace std;

int main()
{
    vector<int>v{1,2,3,2,9};
    vector<int> ::iterator it;
    it =adjacent_find(v.begin(),v.end());
    cout<<*it <<endl;
    
}