#include<bits/stdc++.h>
using namespace std;

int nod=0;
class Node
{
    public:
    int index;
    int data;
    Node *next;
};

Node *head =new Node();
Node *prev_node;

int printing()
{
    Node *temp =head;
    temp =temp->next;
    while (temp !=NULL)
    {
        cout<<temp->index<<" ->";
        temp =temp->next;
    }
    cout<<endl;
    temp =head;
    temp =temp->next;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ->";
        temp =temp->next;
    }

}

int add_node(int data)
{
    Node *new_node =new Node();
    new_node->data =data;
    new_node->index=0;
    prev_node->next =new_node;
    prev_node =new_node;
    return 1;
}

int changing_index(int index,int pos)
{
    int i =0;
    Node *temp =head;
    temp=temp->next;
    while (temp!=NULL)
    {
        if(i <pos)
        {
            if(temp->index >index)
            {
                temp->index =temp->index-1;
                temp=temp->next;
                continue;
            }
            i++;
            temp=temp->next;
        }
        else
        {
            if(temp->index <=index)
            {
                temp->index =temp->index+1;
                temp=temp->next;
                continue;
            }
            i++;
            temp=temp->next;
        }
        
    }
    return 1;
    

}



int lru(int data)
{   int i =0;
    Node *temp =head;
    temp=temp->next;
    while (temp !=NULL)
    {
        if (temp->data ==data)
        {   //cout<<temp->index<<"index: "<<endl;
            changing_index(temp->index,i);

            temp->index =0;           
            i =11;
            //temp=temp->next;
            //continue;
            break;           
        }
        temp->index =temp->index+1;
        i++;
        temp=temp->next;

    }

    if(i >=10)
      {  printing();
        return 1;
    }
    if (i >=4)
    {
        //cout<<"testing"<<endl;
        temp=head;
        temp =temp->next;
     while (temp !=NULL)
    {
        if (temp->index ==4)
        {   
            temp->index =0;
            temp->data =data;

            printing();
            return 1;
        }
        
        temp=temp->next;
    }   
    }
    else
    {
        add_node(data);
        //changing_index(i);
        printing();
        return 1;
    }
    
    
}

int main()
{   prev_node =head;
    vector <int> v1 ={10,20,10,30,40,50,30,40,60};
    //int a[] ={10,20,10,30,40,50,30,40,60};
    //cout<<v1.size();
    for(int i =0;i<v1.size();i++)
        {
        cout<<i<<" :"<<endl;
        lru(v1[i]);
        cout<<endl;
        cout<<endl;
        //Node c;
        //c.data=1;
        }
}