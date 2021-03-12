#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    vector<int> v;
    int i =1,choice,data;
    while(i!=0)
    {
    cout<<"1:enter more data\n";
    cout<<"2:done with entering";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"enter the data: ";
        cin>>data;
        v.push_back(data);
        break;
    case 2:
        i =0;
        break;
    }
    }
    for(vector<int>::iterator p =v.begin();p !=v.end(); ++p)
                {
                    cout<< *p <<" ";
                }
}
