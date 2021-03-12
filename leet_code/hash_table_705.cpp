#include<bits/stdc++.h>
using namespace std;
template <typename T> class Dollar;
template <typename T>
class Rupee
{
public:
    T rup;
    Rupee() {
        rup  = 0;
    }
    Rupee (Dollar<T> d)
    {
        rup = d.dol * 70;
    }

};
template <typename T>
class Dollar
{
public:
    T dol;
    Dollar() {
        dol = 0;
    }
    Dollar (Rupee<T> r)
    {
        dol = r.rup / 70;
    }
};

int main()
{
    Rupee<float> r1, r2;
    Dollar<float> d1, d2;

    cout << "Enter rupees: ";
    cin >> r1.rup;
    d1 = r1;
    cout << d1.dol << endl;
    cin >> d2.dol;
    r2 = d2;
    cout << r2.rup << endl;
}