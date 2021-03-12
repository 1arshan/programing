#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    int height;
};



Node *NewNode(int data)
{
    Node *new_node =new Node();
    new_node->data=data;
    new_node->height=1;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;

}

int max(int a,int b)
{
    return (a>b)?a:b;
}


int height(Node *temp)
{
    if(temp==NULL)
    return 0;
    return temp->height;
}

int getbalance(Node *temp)
{
    if(temp==NULL)
    return 0;
    return height(temp->left) -height(temp->right);
}

Node *RightRotate(Node *temp)
{
    Node *x =temp->left;
    Node *y =x->right;

    x->right=temp;
    temp->left=y;

    temp->height=1+max(height(temp->left),height(temp->right));
    x->height=1+max(height(x->left),height(x->right));

    return x;
}


Node *LeftRotate(Node *temp)
{
    Node *temp_right =temp->right;
    Node *y =temp_right->left;

    temp_right->left=temp;
    temp->right =y;

    temp->height=1+max(height(temp->left),height(temp->right));
    temp_right->height=1+max(height(temp_right->left),height(temp_right->right));

    return temp_right;
}

Node *add_node(Node *temp,int data)
{
    if(temp==NULL)
    {
        return NewNode(data); 
    }
    if(data <temp->data)
    {
        temp->left=add_node(temp->left,data);
    }
    else if (data>temp->data)
    {
        temp->right=add_node(temp->right,data);
    }
    else
    {
        return temp;
    }
    
    temp->height=1 + max(height(temp->left),height(temp->right));

    int balance =getbalance(temp);

    //LL
    if(balance>1&&data <temp->left->data)
        return RightRotate(temp);

    //RR
    if(balance<-1&&data >temp->right->data)
        return LeftRotate(temp);

    //LR
    if(balance>1 && data> temp->left->data)
    {
        temp->left=LeftRotate(temp->left);
        return RightRotate(temp);
    }

    //RL
    if(balance<-1 && data <temp->right->data)
    {
        temp->right=RightRotate(temp->right);
        return LeftRotate(temp);
    }

    return temp;
}


void preOrder(Node *root) 
{ 
	if(root != NULL) 
	{ 
		cout << root->data << " "; 
		preOrder(root->left); 
		preOrder(root->right); 
	} 
} 


int main()
{
    Node *head=NULL;
    vector <int> v{8,7,5,2,10,9,6,378,38,943,84,78,3,4,1,0,93};
    int i =0;
    for(i =0;i<v.size();i++)
    {
        head= add_node(head,v[i]);       
    }
    cout<<"Preorder traversal of the constructed AVL tree is "<<endl; 
	preOrder(head); 
	
	return 0; 
}