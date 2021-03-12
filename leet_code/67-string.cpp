#include<bits/stdc++.h>
using namespace std;




//a=small,b=big,pos=
char binary_addition(string &a,string &b,int size_a,int size_b)
{
    char carry='0';
    char sum='0';
    size_b--;//big
    size_a--;//small
    //cout<<b<<endl;
    while (size_a>=0)
    {   //cout<<"b: "<<b<<" carry: "<<carry<<endl;
        (a[size_a]==carry)?sum='0':sum='1';
        ((a[size_a]=='1')&&(carry=='1'))?carry='1':carry='0';
        ((sum=='1')&&(b[size_b]=='1'))?carry='1':carry=='0'?carry='0':carry='1';
        (sum==b[size_b])?b[size_b]='0':b[size_b]='1';
        size_b--;
        size_a--;
        //cout<<"b: "<<b<<" carry: "<<carry<<endl;
    }
    //cout<<"b: "<<b<<" carry: "<<carry<<" size_b: "<<size_b<<endl;
    //cout<<b<<endl;
    while (size_b>=0)
    {
        (b[size_b]==carry)?a[0]='0':a[0]='1';
        //cout<<"a[0] :"<<a[0]<<" b[size_b]: "<<b[size_b]<<endl;
        ((b[size_b]=='1')&&(carry=='1'))?carry='1':carry='0';
        //cout<<"carry: "<<carry<<endl;
        b[size_b]=a[0];
        size_b--;
        cout<<b<<endl;
    }
    
    return carry;
}


int main()
{
    string a ="1111111110000";
    string b ="10001010101010001010101111";
    int size_a=a.size();
    int size_b =b.size();
    int diff =size_a-size_b;
    string carry;

    if(diff>0)
    {
        carry = binary_addition(b,a,size_b,size_a);
        if (carry=="1")
            a.insert(0,carry);
        cout<<a<<" carry: "<<carry<<endl;
    }
    else
    {
        carry=binary_addition(a,b,size_a,size_b);
        if (carry=="1")
            b.insert(0,carry);
        cout<<b<<" carry: "<<carry<<endl;
        cout<<"abc"<<endl;
    }
    
    
}