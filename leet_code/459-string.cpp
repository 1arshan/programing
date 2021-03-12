#include<bits/stdc++.h>
using namespace std;

int sub_string(string &s,int partion_p,int starting_p)
{
    int i =0;
    bool result;
    cout<<"partion_p: "<<partion_p<<"starting_p: "<<starting_p<<endl;
    for(i =0;i<partion_p-starting_p;i++)
    {//cout<<"s[starting_p+i]: "<<s[starting_p+i]<<" s[partion_p+i]: "<<s[partion_p+i]<<endl;
        if(s[starting_p+i]==s[partion_p+i])
        {
            cout<<starting_p+i<<" : "<<s[starting_p+i]<<" ; "<<partion_p+i <<" : "<<s[partion_p+i]<<" i: "<<i<<endl;
            continue;
        }
        else
        {
            return false;
        }
        
    }
    cout<<"lopp close"<<endl;
    int temp=2*partion_p-starting_p; 
    if(temp<s.size())
    {
        starting_p=partion_p;
        partion_p=temp;
        i=0;
        continue;
    }
    else
    {
        return true;
    }
    return result;
    
    
}


/*int sub_string(string &s,int partion_p,int starting_p)
{
    int i =0;
    bool result;
    cout<<"partion_p: "<<partion_p<<"starting_p: "<<starting_p<<endl;
    for(i =0;i<partion_p-starting_p;i++)
    {//cout<<"s[starting_p+i]: "<<s[starting_p+i]<<" s[partion_p+i]: "<<s[partion_p+i]<<endl;
        if(s[starting_p+i]==s[partion_p+i])
        {
            cout<<starting_p+i<<" : "<<s[starting_p+i]<<" ; "<<partion_p+i <<" : "<<s[partion_p+i]<<" i: "<<i<<endl;
            continue;
        }
        else
        {
            return false;
        }
        
    }
    cout<<"lopp close"<<endl;
    int temp=2*partion_p-starting_p; 
    if(temp<s.size())
    result= sub_string(s,temp,partion_p);
    else
    {
        return true;
    }
    return result;
    
    
}
*/
int main()
{
    string s ="zz";
    int i;
    bool result=false;
    
    for(i=1;i<=s.size()/2;i++)
    {
        if(s.size()%i==0)
        {   
            //j=1; 
            result=sub_string(s,i,0);
            if (result)
            break;
            cout<<result<<" i: "<<i<<endl;
        }
        
    }
    
    cout<<result<<" i: "<<i<<endl;
}