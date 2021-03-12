#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node *child;
};

Node *head =new Node();


int rearranging(Node *temp)
{   
    Node *temp1 =temp;
    while(temp->next!=NULL)
    {
        if(temp->child)
        {
            rearranging(temp->child);
        }
        temp=temp->next;
        
    }

    temp->next=temp1 ->next;
    temp1->next->prev=temp;
    temp1->next=temp1->child;
    temp1->next->prev=temp1;
    temp1->child=NULL;
    cout<<"data: "<<temp1->data<<endl;
    return 1;
}

/*
int printing()
{
    Node *temp;
    temp =head;
    temp =temp->next;
    while (temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    
}

int add_node(int data)
{
    Node *new_node =new Node();
    new_node->data =data;
    prev_node->next =new_node;
    prev_node=new_node;
    
    return 1;
}
*/
int main()
{   //prev_node =head;
    //vector <int> v{2,1,3,5,6,4,7,8,1};
    vector <int> v{1,2,3,4,5,6,7
    };
    //for(int i =0;i<v.size();i++)
    //{
      //  add_node(v[i]);
    //}
    rearranging(head);
    //printing();
}