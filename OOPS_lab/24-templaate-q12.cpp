#include <iostream>
using namespace std;

template <typename T>
T minimum(T a, T b) {
    return a < b ? a : b;
}

int main() {
    cout << "Char: Minimum of 'a' and 'b' \n"
         << minimum('a', 'b')<<endl;
    cout << "Int: Minimum of '2' and '3' \n"
         << minimum(2, 3);
    cout << "Float: Minimum of '2.5' and '3.5' \n"
         << minimum(2.5, 3.5);
}