#include<bits/stdc++.h>
using namespace std;

class Matrix{
    private:
    int a[3][3] ={1,2,3,4,5,6,7,8,9};

    public:
    
    friend class Multiply;
};

class Multiply{
    public:
    
    void display(Matrix &c,Matrix &d)
        {cout<<c.a[0][0]<<endl<<d.a[0][1];
        }
};

int main()
{
    Matrix r1;
    Matrix r2;
    Multiply r3;
    r3.display(r1,r2);
    
}