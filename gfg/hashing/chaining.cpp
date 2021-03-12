#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;
};
Node* h[4];


int printing(int i)
{
    Node* new_node =new Node();
    if(i<4)
    {   
        cout<<h[i]->data<<" ";
        new_node =h[i]->next;
        while (new_node!=NULL)
        {
            cout<<new_node->data<<" ";
            new_node =new_node->next;
        
        }
        cout<<endl;

    printing(++i);
    }
    return 1;
}




int hashing(int data,int pos)
{   
    if(h[pos]->data)
    {
        Node* new_node =new Node();
        new_node->next=h[pos]->next;
        new_node->data =data;
        h[pos]->next=new_node;
    }
    else
    {
        h[pos]->data =data;
        h[pos]->next=NULL;
    }
    
    
    return 1;
}

int main()
{
    vector<int>a ={2,4,1,3,3,5,3,77,5,99,44,77,47,65,96,26,07,47};
    int pos;

    for(int i =0;i<4;i++)
    {
        h[i] =new Node();
    }

    for(int i=0;i<a.size();i++)
    {
        pos =a[i]%4;
        hashing(a[i],pos); 
    }

    printing(0);

}