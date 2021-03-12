// C++ program to demonstrate 
// SCAN Disk Scheduling algorithm 

#include <bits/stdc++.h> 
using namespace std; 

int size = 8; 
int disk_size = 200; 

int SCAN(int arr[], int head, string direction) 
{ 
	int seek_count = 0; 
	int distance, cur_track; 
	vector<int> left, right; 
	vector<int> seek_sequence; 

	// appending end values 
	// which has to be visited 
	// before reversing the direction 
	if (direction == "left") 
		left.push_back(0); 
	else if (direction == "right") 
		right.push_back(disk_size - 1); 

	for (int i = 0; i < size; i++) { 
		if (arr[i] < head) 
			left.push_back(arr[i]); 
		if (arr[i] > head) 
			right.push_back(arr[i]); 
	} 

	// sorting left and right vectors 
	std::sort(left.begin(), left.end()); 
	std::sort(right.begin(), right.end()); 

	// run the while loop two times. 
	// one by one scanning right 
	// and left of the head 
	int run = 2; 
	while (run--) { 
		if (direction == "left") { 
			for (int i = left.size() - 1; i >= 0; i--) { 
				cur_track = left[i]; 

				// appending current track to seek sequence 
				seek_sequence.push_back(cur_track); 

				// calculate absolute distance 
				distance = abs(cur_track - head); 

				// increase the total count 
				seek_count += distance; 

				// accessed track is now the new head 
				head = cur_track; 
			} 
			direction = "right"; 
		} 
		else if (direction == "right") { 
			for (int i = 0; i < right.size(); i++) { 
				cur_track = right[i]; 
				// appending current track to seek sequence 
				seek_sequence.push_back(cur_track); 

				// calculate absolute distance 
				distance = abs(cur_track - head); 

				// increase the total count 
				seek_count += distance; 

				// accessed track is now new head 
				head = cur_track; 
			} 
			direction = "left"; 
		} 
	} 

	cout << "Total number of seek operations = "
		<< seek_count << endl; 

	cout << "Seek Sequence is" << endl; 

	for (int i = 0; i < seek_sequence.size(); i++) { 
		cout << seek_sequence[i] << endl; 
	} 
    return 0;
} 

int CSCAN(int arr[], int head) 
{ 
	int seek_count = 0; 
	int distance, cur_track; 
	vector<int> left, right; 
	vector<int> seek_sequence; 

	// appending end values 
	// which has to be visited 
	// before reversing the direction 
	left.push_back(0); 
	right.push_back(disk_size - 1); 

	// tracks on the left of the 
	// head will be serviced when 
	// once the head comes back 
	// to the beggining (left end). 
	for (int i = 0; i < size; i++) { 
		if (arr[i] < head) 
			left.push_back(arr[i]); 
		if (arr[i] > head) 
			right.push_back(arr[i]); 
	} 

	// sorting left and right vectors 
	std::sort(left.begin(), left.end()); 
	std::sort(right.begin(), right.end()); 

	// first service the requests 
	// on the right side of the 
	// head. 
	for (int i = 0; i < right.size(); i++) { 
		cur_track = right[i]; 
		// appending current track to seek sequence 
		seek_sequence.push_back(cur_track); 

		// calculate absolute distance 
		distance = abs(cur_track - head); 

		// increase the total count 
		seek_count += distance; 

		// accessed track is now new head 
		head = cur_track; 
	} 

	// once reached the right end 
	// jump to the beggining. 
	head = 0; 

	// Now service the requests again 
	// which are left. 
	for (int i = 0; i < left.size(); i++) { 
		cur_track = left[i]; 

		// appending current track to seek sequence 
		seek_sequence.push_back(cur_track); 

		// calculate absolute distance 
		distance = abs(cur_track - head); 

		// increase the total count 
		seek_count += distance; 

		// accessed track is now the new head 
		head = cur_track; 
	} 

	cout << "Total number of seek operations = " 
		<< seek_count << endl; 

	cout << "Seek Sequence is" << endl; 

	for (int i = 0; i < seek_sequence.size(); i++) { 
		cout << seek_sequence[i] << endl; 
	}
    return 0; 
} 


// Driver code 
int main() 
{ 
    cout<<"NAME: ARSHAN AHMAD\tROLL NO.: 18BCS075\tCLASS:B.Tech 4th SEMESTER\n";
	
    int arr[8];
    int head;
    cout<<"enter the request sequence :";
    for(int i =0;i<8;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the head :";
    cin>>head;
    cout<<"Direction = left (We are moving from right to left)"<<endl;
	//int head = 50; 
	string direction = "left"; 
    int choice;
    
    int j =0;
    while(j!=2)
    {
    cout<<"1: for SCAN algorithim"<<endl;
    cout<<"2: for CSCAN algorithim\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"SCAN SEQUENCE"<<endl;
	    SCAN(arr, head, direction);
        break;
        case 2:
        cout<<"CSAN SEQUENCE"<<endl;
        CSCAN(arr, head); 
        break;
        case 3:
        exit(0);
        
}
    
}
	return 0; 
} 
