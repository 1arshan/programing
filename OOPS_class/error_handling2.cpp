#include <iostream>
using namespace std;

class Student{
   private:
      string name;
      int age;

   public:
      Student() {
         name = "";
         age = 0;
      }
      Student(string name, int age) {
        this->name = name;
        this->age = age;
      }
      friend ostream &operator<<( ostream &o, Student &S ) {
         o << "Name: " << S.name << " Age: " << S.age;
         return o;
      }

      friend istream &operator>>( istream  &i, Student &S ) {
         i >> S.name >> S.age;
         return i;
      }
};

int main() {
    Student s1("Rahul", 20), s2;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}