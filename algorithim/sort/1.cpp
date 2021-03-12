#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int i =1,data,choice;
    while(i!=0)
    {
        cout<<"1:insert new data: ";
        cout<<"\n2:doen with editing: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nenter the data: ";
            cin>>data;
            v.push_back(data);
            break;
            case 2:
            i =0;
            break;
        }
    }
    sort(v.begin(),v.end());
    for(vector<int>::iterator p =v.begin() ;p!=v.end();++p)
    {
        cout<<*p <<" ";
    }
    cout<<"\n";

}