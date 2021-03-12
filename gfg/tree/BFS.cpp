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


queue<Node *>q;

int printing(Node *temp)
{
    if(temp->left)
    {
        q.push(temp->left);
    }
    if(temp->right)
    {
        q.push(temp->right);   
    }
    cout<<temp->data<<"->";
    q.pop();
    if (!q.empty())
    {   
        printing(q.front());
    }
    return 1;
}



Node *head =new Node();
Node *prev_node;

int main()
{   
    vector <int> v{10,7,5,2,10,9,5,5,20,30,13,17,14,23};
    head->data=v[0];
    for (int i =1;i<v.size();i++)
        {   
            add_node(head,v[i]);
            //cout<<endl;
            
        }
    q.push(head);
    printing(head);
}