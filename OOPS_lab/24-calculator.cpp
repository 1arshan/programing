#include <iostream>
using namespace std;

class calculator {
    int M;

   public:
    calculator() {
        M = 0;
    }

    int mPlus(int M) {
        this->M += M;
        return this->M;
    }

    int mMinus(int M) {
        this->M -= M;
        return this->M;
    }

    int mRecall() {
        return this->M;
    }

    int mClear() {
        this->M = 0;
        return 0;
    }
};

int main() {
    int a = 0, b = 0, choice;
    calculator c;
    cout << "Arshan AHmad | 18BCS075 \n";
    do {
        cout << "1. Addition\n2. Subtraction\n3. M+\n4. M-\n5. MR\n6. MC \n7. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the two operands\n";
                cin >> a >> b;
                a += b;
                cout << "\nThe sum is : " << a << '\n';
                break;
            case 2:
                cout << "Enter the two operands\n";
                cin >> a >> b;
                a -= b;
                cout << "\nThe difference is : " << a << '\n';
                break;
            case 3:
                c.mPlus(a);
                a = c.mRecall();
                break;
            case 4:
                c.mMinus(a);
                a = c.mRecall();
                break;
            case 5:
                cout << "M value is : " << c.mRecall() << '\n';
                break;
            case 6:
                c.mClear();
            case 7:
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 7);
}