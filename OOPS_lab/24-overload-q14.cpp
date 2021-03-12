#include <iostream> 
using namespace std; 

class Student 
{ 
private: 
    int roll,studentClass,age;
    string name;
public: 

    Student(){
        roll=0;
        studentClass=0;
        age=0;
        name="";
    } 

    friend ostream & operator << (ostream &out, const Student &c); 
    friend istream & operator >> (istream &in,  Student &c); 
}; 

ostream & operator << (ostream &out, const Student &c) 
{ 
    out << "name: "<<c.name<<"\nclass: "<<c.studentClass<<"\nroll number:"<<c.roll<<"\nAge: "<<c.roll; 
    return out; 
} 

istream & operator >> (istream &in,  Student &c) 
{ 
    /*
    cout << "Enter Real Part "; 
    in >> c.real; 
    cout << "Enter Imaginary Part "; 
    in >> c.imag; 
    */
    cout << "Enter Student's name: "; 
    in >> c.name; 
    cout << "Enter Student's class: "; 
    in >> c.studentClass; 
    cout << "Enter Student's Roll Number: "; 
    in >> c.roll;
    cout << "Enter Student's age: "; 
    in >> c.age;
    return in; 
} 

int main() 
{ 
   Student st; 
   cin >> st; 
   cout << "The Student object is \n"; 
   cout << st; 
   return 0; 
}