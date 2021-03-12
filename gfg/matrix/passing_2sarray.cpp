#include<bits/stdc++.h>
using namespace std;

int printing(int mat[])
{   mat[3]=0;
    cout<<mat[3]<<endl;
    return 1;
}

int testing(int data)
{
    cout<<data<<endl;
}

int main()
{
    /*    int mat[3][2] ={{10,20},
                    {30,40},
                    {50,60}};
    */
    int mat[] ={1,2,3,4};
   printing(mat);
   testing(mat[2]);
   //cout<<mat[3]<<endl;
}