// CPP program to print count of 
// vowels using pointers 

#include <iostream> 

using namespace std; 

int vowelCount(char *string_pointer) 
{ 
	// Create a counter 
	int freq = 0; 
    int  i=0;
	// Iterate the loop until null character encounter 
	while ((*string_pointer) != '\0') { 

		// Check whether character pointer finds any vowels 
		if (*string_pointer == 'a' || *string_pointer == 'e' || *string_pointer == 'i'
			|| *string_pointer == 'o' || *string_pointer == 'u'||*string_pointer == 'A' || *string_pointer == 'E' || *string_pointer == 'I'
			|| *string_pointer == 'O' || *string_pointer == 'U') { 
            *string_pointer ='#';
			// If vowel found increment the count 
			freq++; 
		} 

		// Increment the pointer to next location 
		// of address 
		string_pointer++; 
	} 
    
	return freq; 
} 

// Driver Code 
int main() 
{   cout<<"ARSHAN AHMAD 18BCS075 "<<endl;
	// Initialize the string 
	char str[] = "ObjectOrientedProgrammingLab"; 
    //char str[100];
    //cout<<"Enter the string:"<<endl;
    //cin>>str
	// Display the freq 
	cout << "Vowels in above string: " << vowelCount(str)<<endl; 
    cout<<"new_string is: "<<str;
	return 0; 
} 
