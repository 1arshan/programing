#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
Node* h[5];
int distinct=0;
Node* temp=new Node();


int hashing(int data,int pos)
{
    if(h[pos]->next)
    {   //cout<<"data: "<<data<<endl;
        Node* new_node =new Node();
        temp =h[pos];
        while (temp->next->data)
        {
            if(temp->next->data >data)
            {
                new_node->next=temp->next;;
                new_node->data =data;
                temp->next=new_node;
                distinct++;
                cout<<new_node->data<<" "<<distinct<<endl;
                break;
            }
            else if(temp->next->data<data)
            {
                if(temp->next->next ==NULL)
                {
                    new_node->next=NULL;
                    new_node->data =data;
                    temp->next->next=new_node;
                    distinct++;
                    cout<<new_node->data<<" "<<distinct<<endl;
                    break;
                }
                
                temp=temp->next;
                continue;


                
                
            }
            break;
            
        }
        
    }
    else
    {
        Node* new_node =new Node();
        new_node->data =data;
        h[pos]->next =new_node;
        distinct++;
        //cout<<new_node->data<<" "<<distinct<<endl;
    }
    
    return 1;
    
}    

int main()
{   int pos;
    vector<int> a ={15,12,13,12,13,13,18,12,15,26,19,13,12,15,18,23};
    for(int i=0;i<5;i++)
    {
        h[i]=new Node;
    }

    for(int i =0;i<a.size();i++)
    {
        pos =a[i]%5;
        hashing(a[i],pos);
    }
    cout<<distinct<<endl;
}