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

int rearrangement(Node *temp,Node *temp1)
{   //Node *temp1 =temp;
    int j =0;
    if(temp1->left)
    {
        j =rearrangement(temp,temp1->left);
    }
    else
    {   

        if(temp ==prev_node->left)
            { 
              prev_node->left=temp1; 
            }
        else
        {   cout<<"follow 1; temp1: "<<temp1->data<<endl;
            prev_node->right=temp1;
        }
        
        if(temp1 ==temp->right)
        {
         temp1->left=temp->left;   
            
        }
        else
        {
            prev_node=temp;
            temp1->left=temp->left;
            temp->left=temp1->right; 
            temp1->right=temp->right;   
         return 2;
        }
        
    }
    if (j ==2)
        {
            cout<<"prev_node: "<<prev_node->left->data<<endl;
            cout<<"temp1: "<<temp1->data<<endl;
            temp1->left=prev_node->left;
        }
    return 1;
    
}


int deleting(Node *temp,int data)
{
    int j =0,k =0;
    if(temp->data==data)
    {   
        if(temp->left)
        j=1;
        if(temp->right)
        k =1;
        
        if(j==1 &&k ==1)
        {
         cout<<"found 1"<<endl;
         cout<<"prev node: "<<prev_node->data<<endl;
         rearrangement(temp,temp->right);   
            
        }
        else if((j==1 &&k==0)||(j==0 &&k==1))
        {
            cout<<"found 2"<<endl;
            if(temp ==prev_node->left)
            {
                if(j==1)
                prev_node->left=temp->left;
                else
                {
                    prev_node->left=temp->right;
                }
                
            }
            else
            {
                if(j==1)
                prev_node->right=temp->left;
                else
                {
                    prev_node->right=temp->right;
                }
            }
        }
        else
        {
            cout<<"found 3"<<endl;
            if(temp ==prev_node->left)
            { 
              prev_node->left =NULL; 
            }
            else
            {
                prev_node->right=NULL;
            }
            
        }
         

    }
    else if (data<temp->data)
    {
        if(temp->left)
        {
            prev_node=temp;
            deleting(temp->left,data);
        }
        else
        {
            cout<<"Deleted object does not exist";
        }
        
    }

    else
    {
        if(temp->right)
        {
            prev_node=temp;
            deleting(temp->right,data);
        }
        else
        {
            cout<<"Deleted object does not exist";
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


int main()
{
    vector <int> v{8,7,5,2,10,9,6,378,38,943,84,78,3,4,1,0,93};
    head->data=v[0];
    for (int i =1;i<v.size();i++)
        {   
            add_node(head,v[i]);
                        
        }
    cout<<"Enter the number to be delted";
    cin>>i;
    deleting(head,i);
    printing(head);
}