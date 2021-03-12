#include<bits/stdc++.h>
using namespace std;

int i =0;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};

int add_node(Node *temp,int data)
{ 
    if(temp->data > data)
    {
        if(temp->left !=NULL)
        {   //cout<<"left busy"<<endl;
            add_node(temp->left,data);
        }
        else
        {
            //cout<<"left null"<<endl;
            Node *new_node =new Node();
            temp->left =new_node;
            new_node->data =data;
        }
        
    }
    else
    {
        if(temp->right !=NULL)
        {   //cout<<"right busy"<<endl;
            add_node(temp->right,data);
        }
        else
        {
            //cout<<"right null"<<endl;
            Node *new_node =new Node();
            temp->right =new_node;
            new_node->data =data;
        }
        
    }
    return 1;
    
}

int printing(Node *temp)
{
    int i =0;
    if (temp->left)
    {   i++;
        if (i<2)
        cout<<temp->data<<"->";
        cout<<"left; i: "<<i<<endl;
        printing(temp->left);
        //return 1;
    }

    if (temp->right)
    {
        i++;
        if (i<2)
        cout<<temp->data<<" ->";
        cout<<"right; i: "<<i<<endl;
        printing(temp->right);
        //return 1;

    }
    
    if (!(temp->left)&& !(temp->right))
    {   i++;
        cout<<temp->data<<"->";
        //cout<<"nothing; i: "<<i<<endl;
        return 1;
    }
    return 1;
}

Node *head =new Node();
Node *prev_node;

int main()
{   //prev_node=head;
    vector <int> v{8,7,5,2,10,9,5,5};
    //int a[] ={8,7,5,2,10,9,5};
    head->data=v[0];
    for (int i =1;i<v.size();i++)
        {   cout<<"data: "<<v[i]<<"i: "<<i<<endl;
            add_node(head,v[i]);
            cout<<endl;
            
        }
    printing(head);
}