#include <iostream>
using namespace std;
inline int add(int a, int b){
    return a+b;
}
inline double divide(double x, double y){
    return x/y;
}
inline float subtract(float a, float b){
    return a-b;
}
inline int mod(int x, int y){
    return x%y;
}
inline long int multiply(long int a, long int b){
    return a*b;
}
int main(){
    int c;
    float x,y;
    cout<<"Arshan Ahmad 18BCS075"<<endl;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    cout<<"1. enter 1 to add (x+y) \n2. enter 2 to subtract (x-y) \n3. enter 3 to divide (x/y) \n4. enter 4 to multiply (x*y) \n5. enter 5 to calculate modulus (x%y)\n";
    cin>>c;
    switch(c){
        case 1:
            cout<<add(x,y);
            break;
        case 2:
            cout<<subtract(x,y);
            break;
        case 3:
            cout<<divide(x,y);
            break;
        case 4:
            cout<<multiply(x,y);
            break;
        case 5:
            cout<<mod(x,y);
            break;

    }
    printf("\n");
}