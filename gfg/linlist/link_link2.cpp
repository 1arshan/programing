/* Remember: 
Dont declare new_node as a global variable 
*/
#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;
};
Node *head =new Node();
Node *prev_node;
Node *ptr1,*ptr2;


int adding_node(int data)
{   
    Node *new_node =new Node();
    new_node->data=data;
    prev_node->next=new_node;
    prev_node=new_node; 
    return 1;

}

int detecting_loop()
{int i =0;
    for(i =0;i<2;i++)
    {
        if(ptr1 !=NULL)
        {
            ptr1 =ptr1->next;
        }
        else
        {
            break;
        }
        
    }
    if(i ==2)
    ptr2 =ptr2->next;
    else
    {
        return 1;
    }detecting_loop();
    return 1;
    
}

int printing()
{   Node *temp;
    temp=head;
    int i;
    temp=temp->next;
    while(temp!=NULL)
    {   
    cout<<temp->data<<" ->";
    temp=temp->next;
    i++;
    if (i>=20)
    {
        break;
    }
    }
    

    return 1;

}

int creating_loop(int pos)
{
    Node *temp;
    temp =head;
    for(int i =0;i<pos;i++)
    {
        temp=temp->next;
    }
    prev_node->next=temp;
       
}
int main()
{
    prev_node=head;
    for(int i=1;i<11;i++)
    {
        adding_node(i);
    }
    int pos;
    cout<<"At which pos, u want to create a loop: ";
    cin>>pos;
    creating_loop(pos);
    ptr1 =head;
    ptr2 =head;
    //traverssal();
//cout<<"middle: "<<ptr2->data;
printing();
}