#include <cmath>
#include <iostream>
using namespace std;

class twoD {
   protected:
    int x;
    int y;

   public:
    twoD() {
        this->x = this->y = 0;
    }
    twoD(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int getX() {
        return this->x;
    }

    int getY() {
        return this->y;
    }

    float distance2D(twoD node) {
        return sqrt(pow(this->x - node.getX(), 2) + pow(this->y, node.getY()));
    }
};

class threeD : public twoD {
   protected:
    int z;

   public:
    int getZ() {
        return this->z;
    }

    float distance3D(threeD node) {
        return sqrt(pow(this->x - node.getX(), 2) + pow(this->y - node.getY(), 2) + pow(this->z - node.getZ(), 2));
    }

    threeD() {
        this->x = this->y = this->z = 0;
    }

    threeD(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};

int main() {
    int x, y, z;
    cout << "Arshan Ahmad | 18BCS075 \n";
    cout << "Enter the coordinates for point A \n";
    cin >> x >> y >> z;
    threeD a(x, y, z);
    cout << "Enter the coordinates for point B \n";
    cin >> x >> y >> z;
    threeD b(x, y, z);
    cout << "The distance between these two points is: " << a.distance3D(b);
}