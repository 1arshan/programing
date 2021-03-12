#include<bits/stdc++.h>
using namespace std;



int reverseStr1(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
    
    return 0;
} 



void reverseStr2(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 


string reverseStringReturn(string str) 
{ 
    int n = str.length();  
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
    return str;
}

int main()
{
    cout<<"ARSHAN AHMAD 18BCS075 "<<endl;
    string input ="Arshan Ahmad";
    //cout<<"Enter the string: ";
    //cin>>input;
    string temp =input;

    //funtion with return type
    
    input = reverseStringReturn(input);
    cout<<"reversing with using a return type function: "<<input<<endl;

    //funtion without reverse
    reverseStr2(temp);
    cout<<"reversing without using a return type function: "<<temp<<endl;
}