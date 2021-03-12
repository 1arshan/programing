#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v{8,7,5,2,7,10,9,6,378,38,943,84,78,3,4,1,0,93};
    unordered_set<int>hash;
    int j=0;
    int i;
    for(i =0;i<v.size();i++)
    {
        j =hash.size();
        hash.insert(v[i]);
        if(j ==hash.size())
        {
        break;
        }

    }
    cout<<v[i];
}