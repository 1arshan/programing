#include<bits/stdc++.h>
using namespace std;


class Complex
{
    int real,imaginery;
    int a[5]={0};

    public:
    /*Complex()
    {
        real=0;
        imaginery=0;
    }*/
    Complex(int i=0,int j=0)
    {
        real=i;
        imaginery=j;
    }
    Complex operator +(Complex x)
    {
        x.real+=real;
        x.imaginery+=imaginery;
        return x;
    }
    int operator [](int i)
    {
        a[i]=5;
        cout<<"a[i]: "<<a[i];
        return i;
    }
    void print1()
    {
        cout<<"Real: "<<real<<" Imaginery: "<<imaginery<<endl;
    }
};

int main()
{
    Complex C1(5,6);
    Complex C2(4,7);
    Complex C3(0,0);
    C3=C1+C2;
    C3[2];
    C3.print1();
}