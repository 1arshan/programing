#include<iostream>
using namespace std;

class pntr_obj
{
public:
	int roll;
	string name;

	void set_data(string name,int roll)
	{
		this->roll = roll;
		this->name = name;
	}
	void print()
	{
		//cout<<this<<" invoked"<<endl;
        cout<<"Name: "<<this->name<<endl<<" Roll_no: "<<this->roll<<endl;
	}
};

int main()
{
	cout<<"NAME: ARSHAN AHMAD ; ROLL NO: 18BCS075"<<endl;
	pntr_obj obj1;
	pntr_obj obj2;
	pntr_obj obj3;
	obj1.set_data("cpp",1);
	obj2.set_data("java",2);
	obj3.set_data("python",3);
	obj3.print();
	obj1.print();
    obj1.print();
}