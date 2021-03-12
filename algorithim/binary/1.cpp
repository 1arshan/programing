#include<bits/stdtr1c++.h>

using namespace std;
int main()
{
    vector <int> v1 {1,2,5,2,8,6,7,5,9,5,0,5};
    sort(v1.begin(),v1.end());//0 1 2 2 5 5 6 7 8 9 
    for(vector<int>::iterator p=v1.begin();p!=v1.end();++p)
                {
                    cout<< *p <<" ";
                }
                cout<<endl;

    vector<int> ::iterator low;
    std::pair<std::vector<int>::iterator, 
              std::vector<int>::iterator> er; 
    low =lower_bound(v1.begin(),v1.end(),5);
    cout<<low -v1.begin()<<endl;

    er =equal_range(v1.begin(),v1.end(),5);
    cout<<(er.first-v1.begin())<< endl<< er.second -v1.begin();
}