#include<bits/stdtr1c++.h>
using namespace std;

int even_only(int y)
{
    return y%2;
}

int main()
{
    bool result;
    vector<int> v1{4,3,7,2,8,9,2,76,};
    result= all_of(v1.begin(),v1.end(),even_only);
    if (result ==true)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
}