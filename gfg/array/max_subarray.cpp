#include<bits/stdc++.h>
using namespace std;
int a[7] ={2,3,-8,7,-1,2,3};
vector<int> v;
int sum =0;

int summ(int i)
{
    if(i<7)
    {
        sum =sum+a[i];
        v.push_back(sum);
        summ(i+1);
    }
    else
    {
        sum =0;
    }
    
    
    return 1;
    
}
int check(int i)
{
    if(i<7&&a[i]>=0)
    {
      summ(i);
      check(i+1);  
    }
    
    else if(i<7 &&a[i]<0)
    {
        check(i+1);
    }
    return 1;
}


int main()
{
    check(0);
    cout<<endl<<*max_element(v.begin(),v.end());
}