//to print n to 1

#include<bits/stdc++.h>
using namespace std;
int input;

int fun(int n)
{
    if(n >input)
    return 1;

    fun(n+1);
    cout<<n<<" ";

}

int main()
{
    cout<<"enter the data";
    cin>>input;
    fun(1);
}