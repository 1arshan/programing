#include<bits/stdtr1c++.h>
using namespace std;

int check_even(int y)
    {
        return 1;
    }

int main()
{
    vector<int> v;
    int i =1,choice,data;
    while(i!=0)
    {
    cout<<"1:enter more data\n";
    cout<<"2:done with entering\n";
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
    }}
    stable_partition(v.begin(),v.end(),check_even);
    

    for(vector<int>::iterator p=v.begin();p!=v.end();++p)
                {
                    cout<< *p <<" ";
                }

}