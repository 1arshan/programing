#include<bits/stdc++.h>
using namespace std;

 int sorting(int r1,int r2,int o_e,int e_o,vector<int>& A)
    {int temp;
        if(o_e <A.size() && e_o <A.size())
        {
            if(A[o_e]%2== 0)
            r1 =1;
            else
            {
                o_e+=2;
            }
            
            if(A[e_o]%2==1)
            r2 =1;
            else
            {
                e_o+=2;
            }
            

            if(r1 ==1 &&r2 ==1)
            {
                temp =A[e_o];
                A[e_o]=A[o_e];
                A[o_e] =A[e_o];

                o_e+=2;
                e_o+=2;    
            }
            sorting(r1,r2,o_e, e_o,A);
        }return 1;
    }
    
vector<int> sortArrayByParityII(vector<int>& A) {
        sorting(0,0,1,0,A)
    }return A
};

int main()
{
 int x =-1;
 int y =1;
 cout<<abs(x)<<" "<<abs(y);   
}