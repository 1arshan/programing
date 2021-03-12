#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;
};
Node *head =new Node();
//Node *new_node =new Node();
Node *prev_node;

int adding_node(int data)
{   
    /*new_node->data=data;  
    prev_node =new_node;
    Node *new_node =new Node();
    //cout<<"data: "<<prev_node->data<<endl;
    prev_node->next =new_node;
    */
    Node *new_node =new Node();
    new_node->data=data;
    prev_node->next=new_node;
    prev_node=new_node; 
    return 1;

}

int printing()
{   Node *temp;
    temp=head;
    //cout<<temp->next->data<<endl;
    temp=temp->next;
    while(temp->data)
    {
    cout<<"dsadas"<<endl;    
    cout<<temp->data<<" ->";
    temp=temp->next;
    }
    return 1;

}
int main()
{
    head->next=new_node;
    prev_node=head;
    //cout<<head->data<<endl;

    for(int i=0;i<4;i++)
    {
        adding_node(i);
    }
    //cout<<head->data<<endl;
printing();
}

