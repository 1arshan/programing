#include<bits/stdc++.h>

using namespace std; 
class child 
{ 
	string name; 
	int number; 
public: 
    //constructor
	child() 
	{ 
		 
	} 
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
	child * new_node = new child("Arshan", 50); 

	new_node->display(); 
	delete new_node; 
} 
