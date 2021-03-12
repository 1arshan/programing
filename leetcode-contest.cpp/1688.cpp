#include<bits/stdc++.h>
using namespace std;


int calculate_matches(int n)
{int matches=0;
    if(n!=0&&n!=1)
    {
        cout<<"n: "<<n<<endl;
        matches=calculate_matches(n%2==0?n/2:n/2+1);
    }
    return matches+n/2;
}


int main()
{
    int n =14;
    int matches=calculate_matches(n);
    cout<<matches<<endl;
}