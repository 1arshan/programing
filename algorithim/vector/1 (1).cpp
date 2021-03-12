#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int freq,querry,i,j,value;
    char qt,a,b,c,d,e,f;

    cout<<"enter the freq of ques";
    cin>>freq;

    for(i=0;i<freq;i++)
    {
        cout<<"enter the no of querry: ";
        cin>>querry;
        cout

        for(j=0;j<querry;j++)
        {
            cout<<"enter the querry type: ";
            cin>>qt;

            switch(qt)
            {
            case 'a':
                cout<<"enter the value to be inserted: ";
                cin>>value;
                v.push_back(value);
                break;
            case 'b':
                sort(v.begin(),v.end());
                break;
            case 'c':
                reverse(v.begin(),v.end());
                break;
            case 'd':
                cout<<"size of the vector is: "<<v.size();
                break;
            case 'e':
                for(vector<int>::reverse_iterator p=v.rbegin();p!=v.rend();++p)
                {
                    cout<< *p <<" ";
                }
                break;
            }
        }
    }
}
