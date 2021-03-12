#include<bits/stdc++.h>

using namespace std;

class Company{
    string name;
    long marketValue;
    int no_of_employee;

    public:
       void getDetails(){
          cout<<"The name of company = "<<name<<endl;
          cout<<"Market Value of the company = "<<marketValue<<endl;
          cout<<"No of employee in the company = "<<no_of_employee<<endl;
       }

       void setDetails(){
          cout<<"Enter the name of Company"<<"\t";
          cin>>name;
          cout<<"Enter the market value of company"<<"\t";
          cin>>marketValue;
          cout<<"Enter the no of Employee"<<"\t";
          cin>>no_of_employee;
          cout<<"All details saved succesfully"<<endl;
       }

       void operator + (Company company){
           this->name= company.name + " & " + this->name;
           this->marketValue= company.marketValue + this->marketValue;
           this->no_of_employee= company.no_of_employee + this->no_of_employee;
       }
};

int main(){

  Company comp1,comp2;
  comp1.setDetails();
  comp2.setDetails();
  comp1 + comp2;
  comp1.getDetails();
  return 0;
}