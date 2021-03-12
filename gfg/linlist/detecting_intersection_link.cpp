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
Node *head1=new Node();
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
int n=0;
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
    {
    ptr2 =ptr2->next;
    if( ptr1 ==ptr2)
       { n =1;
        return n;}
        }
    else
    {
        return n;
    }
    n = detecting_loop();
    return n;
    
}

int printing()
{   Node *temp;
    temp=head;
    int i =0;
    temp=temp->next;
    while(temp!=NULL)
    {  // cout<<"i: "<<i<<endl;
    cout<<temp->data<<" ->";
    temp=temp->next;
    i++;
    if (i>=100)
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

int loop_removal()
{
    ptr1 =head;
    while (ptr1->next !=ptr2->next)
    {
        ptr1=ptr1->next;
        ptr2 =ptr2->next;
    }   ptr2->next=NULL;
    return 1;
    
}

int counting_no_of_node(Node *temp)
{   int i =0;
    temp =temp->next;
    while (temp !=NULL)
    {
        //cout<<temp->data<<endl;
        temp=temp->next;
        //cout<<temp->data<<endl;
        i++;
        
    }
    return i;
}

int main()
{
    prev_node=head;
    for(int i=1;i<20;i++)
    {
        adding_node(i);
    }
    
    ptr1 =prev_node;
    prev_node =head1;
    for(int i =50;i<70;i++)
    {
        adding_node(i);
        if(i ==60)
        {
            ptr2 =prev_node;
        }
    }
    ptr1->next =ptr2;
    int c1,c2;
    c1 = counting_no_of_node(head);
    c2 =counting_no_of_node(head1);
    cout<<"c1: "<<c1<<" c2: "<<c2<<endl;
    int diff;
    if (c1 <c2)
    {
        diff =c1;
        c1 =c2;
        c2 =diff;
        ptr1 =head1;
        ptr2 =head;

    }
    
    else
    {
        ptr1 =head;
        ptr2 =head1;
    }
    diff =c1-c2;
    for(int i =0;i<diff;i++)
        {
            ptr1=ptr1->next;
        }
    
    while (ptr1 !=NULL)
    {
        if (ptr2 ==ptr1)
            {
                cout<<"Common: "<<ptr2->data<<endl;
                break;
            }
        ptr1=ptr1->next;
        ptr2=ptr2->next;

    }
    

    
    printing();
    
}
