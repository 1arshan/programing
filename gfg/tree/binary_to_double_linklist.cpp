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


Node *head =new Node();
Node *prev_node;
int j =0;


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

int serializing(Node *temp)
{
    int i =0;
    if (temp->left)
    {   i++;
        serializing(temp->left);
        if (i<2)
        {
            cout<<temp->data<<"->";
            if(prev_node)
            {
                prev_node->right=temp;
                temp->left=prev_node;
            } 
            prev_node=temp;
        }
        //cout<<"left; i: "<<i<<endl;
        //return 1;
    }

    if (temp->right)
    {
        i++;
        serializing(temp->right);
        if (i<2)
        {
            cout<<temp->data<<"->";
            if(prev_node)
            {
                prev_node->right=temp;
                temp->left=prev_node;
            } 
            prev_node=temp;
        }
        //cout<<"right; i: "<<i<<endl;
        //return 1;

    }
    
    if (!(temp->left)&& !(temp->right))
    {   i++;
        
        cout<<temp->data<<"->";
        if(prev_node)
        {
            prev_node->right=temp;
            temp->left=prev_node;
        } 
        prev_node=temp;
        if (j==0)
        {
        head =temp;
        j++;
        }
        //cout<<"nothing; i: "<<i<<endl;
        return 1;
    }
    return 1;
}


int printing(Node *temp)
{   
    while(temp!=NULL)
    {   
        cout<<temp->data<<"->";
        temp=temp->right;
    }
}

int main()
{   //prev_node=head;
    vector <int> v{8,7,5,2,10,9,5,6,378,38,943,84,78,3,4,1,0,93};
    //int a[] ={8,7,5,2,10,9,5};
    head->data=v[0];
    for (int i =1;i<v.size();i++)
        {   //cout<<"data: "<<v[i]<<"i: "<<i<<endl;
            add_node(head,v[i]);
            //cout<<endl;
            
        }
    prev_node=NULL;
    cout<<"Tree:";
    serializing(head);
    cout<<endl;
    printing(head);
}