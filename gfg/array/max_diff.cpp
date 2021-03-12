#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,in,num;
        vector<int> v;
        while (i!=1)
        {
            cout<<"1:enter more"<<endl<<"2:done"<<endl;
            cin>>in;


            switch(in)
            {
                case 1:
                cout<<"enter the number";
                cin>>num;
                v.push_back(num);
                break;
                case 2:
                i =1;
                for (vector<int>::iterator p=v.begin();p!=  v.end(); p++)
                {
                    cout<<*p<<" ";
                }
                
                break;

        
            }
        }
    vector<int>::iterator max,min;
    min= min_element(v.begin(),v.end());//give address 
    max = max_element(v.begin(),v.end());
    int diff =*max-*min;
    cout<<endl<<diff;     
        
}