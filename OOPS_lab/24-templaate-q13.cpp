#include <iostream>

template <class T>
class pair {
    T a, b;

   public:
    pair(T a, T b) {
        this->a = a;
        this->b = b;
    }
    T get_max() {
        return a > b ? a : b;
    }
};

int main() {
    std::cout << "Int: between 1 and 2 \n";
    pair<int> p1(1, 2);
    std::cout << p1.get_max();
    std::cout << "\nFloat: between 1.5 and 2.5 \n";
    pair<float> p2(1.5, 2.5);
    std::cout << p2.get_max();
    std::cout << "\nChar: between a and b \n";
    pair<char> p3('a', 'b');
    std::cout << p3.get_max();
}