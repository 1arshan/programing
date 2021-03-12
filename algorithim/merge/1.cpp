#include<bits/stdtr1c++.h>
using namespace std;

int main()
{
    vector<int> v1 ={1,5,3,7,2,8,9}, v2 ={21,53,7,3,8,2,5},v3(20);
    auto n =v1.size() +v2.size();
    v3.resize(n);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    sort(v3.begin(),v3.end());
    
    for(vector<int>::iterator p=v3.begin();p!=v3.end();++p)
                {
                    cout<< *p <<" ";
                }
                cout<<endl;

    

}