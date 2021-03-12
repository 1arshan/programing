#include<bits/stdc++.h>
using namespace std;



int main()
{
    //vector<int> stones{7,90,5,1,100,10,10,2};
    vector<int> stones{5,3,1,4,2};
    int pos_e=stones.size()-1;
    int pos_s =0;
    int i =0,diff=0;
    while (pos_s !=pos_e)
    {
        //alice
        if(stones[pos_e]>stones[pos_s])
        {
            pos_s++;
        }
        else
        {
            pos_e--;
        }
        
        //bob
        if(stones[pos_e]>stones[pos_s])
        {
            diff+=stones[pos_s];
            pos_s++;
        }
        else
        {
            diff+=stones[pos_e];
            pos_e--;
            
        }
        
    }
    
}