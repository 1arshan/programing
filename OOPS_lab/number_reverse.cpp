#include<bits/stdc++.h>
using namespace std;


int reverse1(int number)
{
    int reverse=0, rem;    
    
  while(number!=0)    
  {    
     rem=number%10;      
     reverse=reverse*10+rem;    
     number/=10;
}
return reverse;
}


void reverse2(int &number)
{
     int reverse=0, rem;    
    
  while(number!=0)    
  {    
     rem=number%10;      
     reverse=reverse*10+rem;    
     number/=10;
}
number =reverse;
}

int main()
{
    cout<<"ARSHAN AHMAD 18BCS075 "<<endl;
    int input;
    cout<<"Enter the number: ";
    cin>>input;
    int temp =input;

    //funtion with return type
    input = reverse1(input);
    cout<<"reversing with using a return type function: "<<input<<endl;

    //funtion without reverse
    reverse2(temp);
    cout<<"reversing without using a return type function: "<<temp<<endl;
}