
#include<bits/stdc++.h>
using namespace std; 
class child 
{ 
	string name; 
	int number; 
public: 
	//child();
	
     
	child(string name, int number) 
	{ 
		this->name = name; 
		this->number = number; 
	} 
	void display() 
	{ 
		cout<< "Name:" << name << endl; 
		cout<< "Number:" << number << endl; 
	} 
	void * operator new(size_t size) 
	{ 
		cout<< "Overloading new operator with size: " << size << endl; 
		void * p = ::new child(); 
		//void * p = malloc(size); will also work fine 
	
		return p; 
	} 

	void operator delete(void * p) 
	{ 
		cout<< "Overloading delete operator " << endl; 
		free(p); 
	} 
}; 

int main() 
{ 
	child * p = new child("Yash", 24); 

	p->display(); 
	delete p; 
} 
