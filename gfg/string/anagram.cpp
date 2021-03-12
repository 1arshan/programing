#include<bits/stdc++.h>
using namespace std;


int a[26],b[26];
int base =97;
int hashing(string temp,string arr)
{char t;
int u;
    for(int i =0;i<temp.length();i++)
    {
      t =temp[i];
      u = t;
      if (arr =="a")
        {a[u-base] +=1;

        }
      else
      {
          b[u-base] +=1;
      }
      
      

    }
}


int main()
{
    string x ="aaacdeeeeef";
    string y ="aaacdeeeef";
    
    hashing(x,"a");
    hashing(y,"b");
int i;
    for( i=0;i<26;i++)
    {
        if(a[i]==b[i])

        continue;
        else
        {
            cout<<"both string not are same"<<endl;   
            break;
        }
         
        
    }
    if (i ==26){
        cout<<"both string are same"<<endl;
}
}