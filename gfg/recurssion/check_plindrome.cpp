#include<bits/stdc++.h>
using namespace std;
#include<string.h>
char in[50];
int l;
int check(int i)
{ //cout<<in[l-1-i] << " "<<in[i]<<endl;
    if(in[i]==in[l-1-i])
       { if(i ==l/2)
       {
           cout<<"number is palindrome "<<endl;
           exit(0);
       }
           check(i+1);
       
       }
        else
        {   //cout<<i<<endl;
            cout<<"no is not palindrome";
            exit(0);
        }
        
}

int main()
{
    
    cout<<"enter the string: ";
    cin>>in;
    l =strlen(in);
    //cout<<l<<endl;
    check(0);
}