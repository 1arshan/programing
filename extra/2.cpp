// C++ program to find Current Day, Date 
// and Local Time 
#include<iostream> 
#include<ctime> 
using namespace std; 
int main() 
{ 
	// Declaring argument for time() 
	time_t tt; 

	// Declaring variable to store return value of 
	// localtime() 
	struct tm * ti; 

	// Applying time() 
	time (&tt); 

	// Using localtime() 
	ti = localtime(&tt); 

	cout << "Current Day, Date and Time is = "
		<< asctime(ti)<<endl; 

	cout << "Current Day, Date and Time is = "
		<< time(ti)<<endl;
return 0; 
} 

