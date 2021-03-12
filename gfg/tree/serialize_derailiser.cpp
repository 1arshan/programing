#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};

Node *head =new Node();
Node *prev_node;
Node *head2 =new Node();
vector<int> tree_transfer;


int add_node(Node *temp,int data)
{
    if(temp->data>data)
    {
        if(temp->left !=NULL)
        {
            add_node(temp->left,data);
        }
        else
        {
            Node *new_node =new Node();
            temp->left=new_node;
            new_node->data=data;
        }
        
    }
    else
    {
        if(temp->right!=NULL)
        {
            add_node(temp->right,data);
        }
        else
        {
            Node *new_node =new Node();
            temp->right=new_node;
            new_node->data=data;
        }
        
    }
    return 1;
    
}


int serializing(Node *temp)
{
    int i =0;
    if (temp->left)
    {   i++;
        if (i<2)
        {
        cout<<temp->data<<"->";
        tree_transfer.push_back(temp->data);
        }
        //cout<<"left; i: "<<i<<endl;
        serializing(temp->left);
        //return 1;
    }
        

    if (temp->right)
    {
        i++;
        if (i<2)
        {
        cout<<temp->data<<" ->";
        tree_transfer.push_back(temp->data);
        if(!temp->left)
        tree_transfer.push_back(-1);
        }
        //cout<<"right; i: "<<i<<endl;
        serializing(temp->right);
        //return 1;

    }
    
    else
    {
        if(i==1)
        tree_transfer.push_back(-1);
    }
    

    if (!(temp->left)&& !(temp->right))
    {   i++;
        cout<<temp->data<<"->";
        tree_transfer.push_back(temp->data);
        tree_transfer.push_back(-1);
        tree_transfer.push_back(-1);
        //cout<<"nothing; i: "<<i<<endl;
        return 1;
    }
    return 1;
}

int desirializing(Node *temp,int pos)
{
    int i =0;
    if(tree_transfer[pos]== -1)
    {
        
        ++pos;
               
    }
    else
    {
        Node *new_node =new Node();
        temp->left=new_node;
        new_node->data=tree_transfer[pos];
        
        pos=desirializing(new_node,++pos);

    }
    
    if(tree_transfer[pos]== -1)
    {
        
        ++pos;
               
    }
    else
    {
        Node *new_node =new Node();
        temp->right=new_node;
        new_node->data=tree_transfer[pos];
        
        pos=desirializing(new_node,++pos);

    }
    return pos;
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
        
    }

    if (temp->right)
    {
        i++;
        if (i<2)
        cout<<temp->data<<" ->";
        cout<<"right; i: "<<i<<endl;
        printing(temp->right);
        

    }
    
    if (!(temp->left)&& !(temp->right))
    {   i++;
        cout<<temp->data<<"->";
        cout<<"nothing; i: "<<i<<endl;
        return 1;
    }
    return 1;
}



int main()
{
    vector <int> v{8,7,5,5,2,10,9,6,378,38,943,84,78,3,4,1,0,93};
    head->data=v[0];
    for (int i =1;i<v.size();i++)
        {   
            add_node(head,v[i]);
                        
        }
    
    serializing(head);
    cout<<endl<<endl<<"after serializer: ";
    for(int i =0;i<tree_transfer.size();i++)
    {
        cout<<tree_transfer[i]<<"-> ";
    }
    cout<<endl<<endl;
    head2->data =tree_transfer[0];
    desirializing(head2,1);
    printing(head2);
}