#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;
};

class Solution
{
    public:
    int addnode(Node *l1,vector<int>&v)
    {
        Node *prev=l1;
        for(auto x:v)
        {
            // cin>>prev->data;
            Node *new_node=new Node;
            prev=new_node;
            prev->data=x;
            prev->next=new_node;
            prev=new_node;
        }
        return 1;
    }

    int printnode(Node *l)
    {
        Node *temp=l;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        return 1;
    }
};


int main()
{
    Node *l1;
    Node *l2;
    vector<int>v1{1,2,4};
    vector<int>v2{1,3,4};
    Solution t;
    t.addnode(l1,v1);
    // t.addnode(l2,v2);
    t.printnode(l1);
}