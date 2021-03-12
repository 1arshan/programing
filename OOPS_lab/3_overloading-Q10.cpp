#include <bits/stdc++.h>
using namespace std;

class company{
    public:
    int employees,profit;

    company(int a, int b){
        employees = a;
        profit = b;
    }

    company operator +(company c){
        company temp(0,0);

        temp.employees = this->employees + c.employees;
        temp.profit = this->profit + c.profit;

        return temp;
    }

  
  company operator -(company c){
        company temp(0,0);

        temp.employees = this->employees - c.employees;
        temp.profit = this->profit - c.profit;

        return temp;
    }


    void print(){
        cout<<"Data memebers of class are : "<<employees<<"    "<<profit<<endl;
    }
};


int main(){
    cout<<"ARSHAN AHMAD 18BCS075"<<endl;
     company C1(10,500),C2(5,250);

     C1.print();

     C1 = C1 + C2;
     C1.print();


     return 0;
}