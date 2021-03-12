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


int main()
{
    prev_node=head;
    for(int i=1;i<11;i++)
    {
        adding_node(i);
    }
    int pos;
    cout<<"DO u want to create a loop; 1:yes ;0: no:: ";
    cin>>pos;
    switch (pos)
    {
    case 1:
        cout<<"At which pos, u want to create a loop: ";
        cin>>pos;
        creating_loop(pos);    
        break;
    
    case 0:
        break;
    }
    
    ptr1 =head;
    ptr2 =head;
    int t;
    t = detecting_loop();
    cout<<"LOOP Present: "<<t<<endl;
    printing();
    cout<<endl;

    if (t ==1)
    {
        loop_removal();
    }
    printing();
}