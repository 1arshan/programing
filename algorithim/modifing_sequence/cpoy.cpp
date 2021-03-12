#include<bits/stdc++.h>
using namespace std;

int condition(int y)
{
    return y%2 ==1;
}
int main()
{
    vector<int> v1{1,4,3,6,3,7,3,8,4},v2(2);
    vector<int>::iterator temp;

    copy_if(v1.begin(),v1.end(),v2.begin(),condition);


    v2.push_back(5);
    for(temp =v2.begin();temp!=v2.end();temp++)
    {
        cout<<*temp <<" "  ;
    }

}