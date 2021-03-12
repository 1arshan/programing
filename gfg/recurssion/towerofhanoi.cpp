#include<bits/stdc++.h>
using namespace std;

char cp1='A',cp2='A',cp3='A',cp4='A',cp5='A',np1='A',np2='A',np3='A',np4='A',np5='A';
int i;
char x ='A',y ='B',z ='C';
int han(int p)
{   if(p==2)
{   
    //first time
    if(i==1)
    {
    cout<<"a->"<<x<<"to"<<y<<endl<<"b->"<<y<<" to" <<z<<endl<<"a->"<<y<<"to" <<z<<endl;
    cp1 =z;cp2=z;
    i++;
    return 1;
    }
    else
    {
        
    }
    
}   
 else
 {
     han(p-1);
 }
 
}



int main()
{
    int n;
    cout<<"enter the no of item";
    cin>>n;
    han(n);
}