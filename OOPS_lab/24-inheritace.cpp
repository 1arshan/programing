#include<bits/stdc++.h>
#include <cmath>
using namespace std;


class TwoD
{
    public:
    int x,y;

};


class ThreeD :public TwoD
{
    public:
    int z;

};

float addition(ThreeD a,ThreeD b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y-b.y,2)+ pow(a.z-b.z,2));
}

int main()
{
    int x,y,z;
    ThreeD coordiantes1;
    cout<<"Enter the coordiante of coordinate A"<<endl;
    cin>>x>>y>>z;
    coordiantes1.x =x;
    coordiantes1.y =y;
    coordiantes1.z=z;

    ThreeD coordiantes2;
    cout<<"Enter the coordiante of coordinate B"<<endl;
    cin>>x>>y>>z;
    coordiantes2.x=x;
    coordiantes2.y=y;
    coordiantes2.z=z;

    float result=addition(coordiantes1,coordiantes2);
    cout<<result<<endl;
}