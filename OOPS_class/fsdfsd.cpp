#include <iostream>
using namespace std;

class Vector {
    int i;
    int j;
   public:
    void operator()(Vector x) {
        i = i + x.i;
        j = j + x.j;
    }
    void display() {
        cout << i <<" "<< j;
    }
    Vector(int a, int b){
        i=a;
        j=b;
    }
};

main() {
    Vector v(1,2), w(3,4);
    v(w);
    v.display();
}