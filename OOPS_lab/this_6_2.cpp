#include<bits/stdc++.h>

using namespace std;

class Ptr_obj{
    int roll_no;
    string name;

    public:
       void setData(int roll_no, string name){
          this->roll_no= roll_no;
          this->name= name;
      }

       int getRollNo(){
          return roll_no;
      }

      string getName(){
          return name;
      }

      void print(){
          cout<<this<<"  invoked"<<endl;
      }
};

int main(){

   Ptr_obj student1;
   Ptr_obj student2;
   Ptr_obj student3;

   student1.setData(1, "xyz");
   student2.setData(2, "abc");
   student3.setData(3, "pqr");

   student1.print();
   student2.print();
   student3.print();
   return 0;
}