#include<bits/stdtr1c++.h>
using namespace std;

int main()
{
    vector <int> v{1,3,5,3,7,8,3,9};
    vector<int> ::iterator it;
    it =find(v.begin(),v.end(),40);
    if(it!=v.end())
    {
        cout<<"found"<<endl;

    }
    else
    {
        cout<<"not fond";
    }
    

}