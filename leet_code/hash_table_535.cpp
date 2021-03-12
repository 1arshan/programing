#include<bits/stdc++.h>
using namespace std;


int haffman_base(string str,array< int, 128>&a)
{
    char t;
    int u,i =0,size =str.size();
    while(i<size)
    {
        t =str[i];
        u =t;
        ++a[u];
        
    }

}

int main()
{
    string str;
    cout<<"enter the string to be transmitted:"<<endl;
    cin>>str;
    array <int , 128>a;
    //int a[128];
    haffman_base(str,a)
}