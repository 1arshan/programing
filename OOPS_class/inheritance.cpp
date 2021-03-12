#include<bits/stdc++.h>
using namespace std;

class Animal{
    
    protected:
    string name ="Aria";

    private:
    string color="Black";
    int age =5;

    public:

    void naming()
    {
        cout<<"color: "<<color<<endl;
    }
    void eat()
    {
        cout<<"Animal can eat"<<endl;
    }
    void sleep()
    {
        cout<<"Animal cn sleep "<<endl;
    }

};


class Dog: public Animal
{
    //private:


    public:
    void bark()
    {
        cout<<"Dog bark Baaw Baaw"<<endl;
    }
};

int main()
{
    Dog b1;
    b1.bark();
    b1.eat();
    b1.sleep();
    b1.naming();
    
}