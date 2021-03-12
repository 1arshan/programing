#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *right;
    Node *left;
    int in_node;
};

Node *NewNode(int data)
{
    Node *new_node =new Node();
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    new_node->in_node=0;
    return new_node;
}

int height(Node *temp)
{
    if (temp ==NULL)
        return 0;
    return 1+temp->in_node;
}

Node *add_node(Node *temp,int data)
{
    if(temp==NULL)
    {   
        //cout<<"1"<<endl;
        return NewNode(data);
    }
    if(temp->data>data)
    {
        temp->left=add_node(temp->left,data);
        temp->in_node++;
    }
    else if(temp->data<data)
    {
        temp->right =add_node(temp->right,data);
    }
    else
    {
        cout<<"Same data"<<endl;
        return temp;
    }
    //temp->in_node=height(temp->left)+height(temp->right);
    return temp;
    
}


void preOrder(Node *root) 
{ 
	if(root != NULL) 
	{ 
		cout << root->data<<"( "<<root->in_node<<" )"<< "->"; 
		preOrder(root->left); 
		preOrder(root->right); 
	} 
}


int searching(Node *temp,int k)
{   
    if(temp==NULL)
    return 0;
    //cout<<"1";
    if(temp->in_node+1 ==k )
        {
        cout<<k<<endl;
        cout<<temp->in_node<<endl;
        cout<<temp->data;
        return 1;
        }
    
    if(temp->in_node>=k)
    {   
        searching(temp->left,k);
    }
    else
    {
        searching(temp->right,k-temp->in_node-1);        
    }
    return 1;
    
}

int main()
{
    Node *head=NULL;
    vector <int> v{8,7,5,2,10,9,6,378,38,943,84,78,3,4,1,0,93};
    int i =0;
    for(i =0;i<v.size();i++)
    {
        head =add_node(head,v[i]);       
    }
    cout<<"Preorder traversal of the constructed AVL tree is "<<endl; 
	//preOrder(head); 
    cout<<"kth number: ";
    cin>>i;
    
    searching(head,i);
	return 0;
}