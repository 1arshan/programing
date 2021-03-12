// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Company {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Company() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }

    void operator -- () {
        --value;
    }
    void display() {
        cout << "No of people in the Bank " << value << endl;
    }
};

int main() {
    Company count1;

    // Call the "void operator ++ ()" function
    
    int x =0;
    while(x>=0)
    {
        cout<<"1: if person enter"<<endl<<"2: if person leave"<<endl<<"3: for display nmber of people inside bank"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            ++count1;
            count1.display();
            break;
        
        case 2:
            --count1;
            count1.display();
            break;

        case 3:
            x =-1;
            break;
        }

    }

    count1.display();
    return 0;
}