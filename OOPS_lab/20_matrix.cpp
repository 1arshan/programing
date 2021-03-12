#include <iostream>
using namespace std;

class matrix {
    int **a;
    int m, n;

   public:
    matrix(int m, int n) {
        for (int i = 0; i < n; i++) {
            this->a[i] = new int[m];
        }
        cout << "Enter your matrix";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
    }
    ~matrix() {
        for (int i = 0; i < n; i++) {
            delete this->a[i];
        }
    }
    void multiply(matrix m2) {
        if (this->n != m2.m) {
            cout << "Matrices cannot be multiplied \n";
            return;
        }
        matrix mult(this->m, m2.n);
        for (int i = 0; i < this->m; i++) {
            for (int j = 0; j < m2.n; j++) {
                int sum = 0;
                for (int k = 0; k < this->n; k++) {
                    sum += this->a[i][k] * m2.a[k][j];
                }
                mult.a[i][j] = sum;
            }
        }
    }
    void display() {
        for (int i = 0; i < this->m; i++) {
            for (int j = 0; j < this->n; j++) {
                cout << this->a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
}