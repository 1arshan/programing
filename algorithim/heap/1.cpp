#include<bits/stdtr1c++.h>
using namespace std;
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
    }
    }cout<<"before making heap :";
    for(vector<int>::iterator p =v.begin();p !=v.end(); ++p)
                    cout<< *p <<" ";
    cout<<"\n";
    make_heap(v.begin(),v.end());

    for(vector<int>::iterator p =v.begin();p !=v.end(); ++p)
                    cout<< *p <<" ";
    cout<<"\nfront element :"<<v.front();

    v.push_back(50);
    cout<<"\nafter inserion in vector :";
    for(vector<int>::iterator p =v.begin();p !=v.end(); ++p)
                    cout<< *p <<" ";

    push_heap(v.begin(),v.end());
    cout<<"\nafter pushing it in heap :";
    for(vector<int>::iterator p =v.begin();p !=v.end(); ++p)
                    cout<< *p <<" ";
    pop_heap(v.begin(),v.end());
    cout<<"\nafter poping heap :";
    for(vector<int>::iterator p =v.begin();p !=v.end(); ++p)
                    cout<< *p <<" ";
    v.pop_back();
    cout<<"\nafter poping from vector :";
    for(vector<int>::iterator p =v.begin();p !=v.end(); ++p)
                    cout<< *p <<" ";
    sort_heap(v.begin(),v.end());                
    cout<<"\nafter heap :";
    for(vector<int>::iterator p =v.begin();p !=v.end(); ++p)
                    cout<< *p <<" ";

}
