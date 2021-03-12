#include<bits/stdc++.h>
using namespace std;


int main()
{
    string word ="FLAg";
    int i;
    char temp{1};
    int c_to_i,l_type=1;
    bool result=true;

    temp=word[0];
    c_to_i=temp;
    

    for(i=0;i<word.size();i++)
    {
        temp=word[i];
        c_to_i=temp;
        if(c_to_i<96&&l_type==1)
        {
            continue;
        }
        else if(i<2&&c_to_i>96&&l_type==1)
        {
            l_type=0;
        }
        else if(c_to_i>96&&l_type==0)
        {
            continue;
        }
        else
        {
            result=false;
            break;
        }
         
    }
    cout<<result;
    }