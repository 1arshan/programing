// C++ program to demonstrate vector of pairs 
#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	//declaring vector of pairs 
	vector< pair <int,int> > vect; 

	// initialising 1st and 2nd element of 
	// pairs with array values 
	int arr[] = {10, 20, 5, 40 }; 
	int arr1[] = {30, 60, 20, 50}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	// Entering values in vector of pairs 
	for (int i=0; i<n; i++) 
		vect.push_back( make_pair(arr[i],arr1[i]) ); 

    cout<<vect.size()<<endl;
	    
    for(vector< pair <int, int>>::const_iterator iter = vect.begin(); iter != vect.end();++iter) {
        cout << iter->first << " " << iter->second << endl;
    }

	return 0; 
} 
