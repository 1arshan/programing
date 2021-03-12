#include<bits/stdc++.h>
using namespace std;


int create_hash(unordered_map<string,int>&hash_x,string x)
{
    istringstream iss(x);
    string subs;
    while (iss >> subs)
    {
        hash_x[subs]++;//hoga to value increase krega nhi hoga to enter kr dega    
    } 
}

int main()
{
    string x ="apple apple";
    string y ="banana";
    unordered_map<string,int>hash_x;
    create_hash(hash_x,x);
    create_hash(hash_x,y);
    vector<string>v;
    unordered_map<string, int>:: iterator p; 
	for (p = hash_x.begin(); p != hash_x.end(); p++) 
		{
            if(p->second==1)
            v.push_back(p->first);
        }
    vector<string>::iterator it;
    for(it =v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
}