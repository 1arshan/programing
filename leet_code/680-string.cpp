#include<bits/stdc++.h>
using namespace std;


int checking_palindrome(string &s,int pos_s,int pos_e)
{   
    for(int i=pos_s;i<=s.size()/2;i++)
    {
        if(s[i]==s[pos_e-(i-pos_s)])
        {
            continue;
        }
        else
        {
            return 0;
            break;
        }
        
    }
    return 1;
}


int main()
{
    //string s ="abcdedcdba";
    string s ="abdcdedcba";
    int i =0;
    int pos =-1;
    //cout<<s.size()<<endl;
    for(i=0;i<=s.size()/2;i++)
    {
        if(s[i]==s[s.size()-i-1])
        {   
            cout<<"i: "<<i<<endl;
            continue;
        }
        else
        {
            pos=s.size()-i-1;
            break;
        }
        
    }
    int j =0;
    if(pos==-1)
    {
        cout<<"Number is palindorme"<<endl;
    }
    
    else
    {
        if(s[i+1]==s[s.size()-i-1])//right side 
        {   cout<<"Condition 1"<<endl;
            j = checking_palindrome(s,i+1,s.size()-i-1);
            
        }cout<<"j: "<<j<<endl;
        cout<<"s[i]: "<<s[i]<<endl;
        cout<<"s[s.size()-i-2]: "<<s[s.size()-i-2]<<endl;
        if(s[i]==s[s.size()-i-2]&&j==0)
        {   
            cout<<"Condition 2"<<endl;
            j = checking_palindrome(s,i,s.size()-i-2);
            
        }
        if(j==0)
        {
            cout<<"Number is not palindome"<<endl;
        }
        if(j)
        {cout<<"Number is Palindrome"<<endl;}
        else
        {
            cout<<"Number is not palindome"<<endl;
        }
        
        
    }
    
}