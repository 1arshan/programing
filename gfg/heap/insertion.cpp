#include<bits/stdc++.h>
using namespace std;

int restructure1(int index,int parent,vector<int>&v)
{
    int temp;
    temp =v[index];
    v[index]=v[parent];
    v[parent]=temp;

    index=parent;
    parent =(index-1)/2;
    if(index!=0 && v[index]>v[parent])
    {
        restructure1(index,parent,v);
    }
    return 1;

}

int heap_insertion(vector<int>&v)
{
    int parent,i;
for( i =1;i<v.size();i++)
{
    parent =(i-1)/2;
    if(v[parent]<v[i])
    {
        restructure1(i,parent,v);
    }
}
}


int heap_deletion(int index, vector<int> &v)
{
    int child =2*index +1;

    if(v.size()>=child+1)
    {
        
    }
    else
    {
        if(v.size() ==child)
        {

        }
    }
    
}

int main()
{
    vector <int> v{8,7,5,2,10,9,6,378,38,943,84,78,3,4,1,0,93};
    //vector <int> v{8,7,5,2,10,9};
    heap_insertion(v);
    //make_heap(v.begin(),v.end());
    int i =0;
    cout<<"Press 1 for deltion"<<endl;
    cin>>i;

    v[0]=v[v.size()-1];
    v.pop_back();
    heap_deletion(0,v);
    
    i =0;
    for(auto x:v)
    {   
        
        cout<<x<<" : "<<i<<endl;
        i++;
    }
}