#include<bits/stdc++.h>
using namespace std;




//int checking(int data)

int main()
{
    vector <int> v{8,7,5,2,10,9,6,378,38,943,84,78,3,4,1,0,93};
    int i =0;
    set<int>s;

    for(i =0;i<v.size();i++)
    {
        s.insert(v[i]);
        auto j =s.upper_bound(v[i]);  
        if (j==s.end())
            cout<<"not found"<<endl;
        else
            cout<<*j<<endl;     
    }
}