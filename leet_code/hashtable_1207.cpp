#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector <int> v{8,7,5,2,10,8,9,6,378,38,943,84,78,3,4,1,1,1,1,1,1,1,1,5,4,2,4,2,4,2,0,93,93};
    unordered_map<int,int>d_set;

    int i =0;
    unordered_map<int, int>:: iterator p;
    //p=d_set.begin();
    for(i =0;i<v.size();i++)
    {
        p =d_set.find(v[i]);
        
        if (p!=d_set.end())
        {
            p->second++;
        }
        
        else
        {
            d_set.insert({v[i],1});
        }
    }
    unordered_set<int>hash;
    int j=0;
    
    for(i =0;i<v.size();i++)
    {
        j =hash.size();
        hash.insert(v[i]);
        if(j ==hash.size())
        {
        break;
        }

    }
    cout<<v[i];


/*for(auto x:d_set)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
*/
}