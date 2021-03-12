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


int rearranging(vector<int> &v)
{   int i =0;
    Node *odd_last;
    Node *even_last;
    Node *even_first;
    odd_last =head->next;
    even_last =odd_last->next;
    even_first =even_last;
    int diff;
    if (v.size()%2==0)
    {
        diff =1;
    }
    else
    {
        diff=0;
    }
    
    while(i<(v.size()/2)-diff)
    {
        odd_last->next =even_last->next;
        even_last->next =even_last->next->next;
        odd_last->next->next =even_first;
        
        
        odd_last =odd_last->next;
        even_last=even_last->next;
        i++;
        
    }
    return 1;
}


int printing()
{
    Node *temp;
    temp =head;
    temp =temp->next;
    while (temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    
}

int add_node(int data)
{
    Node *new_node =new Node();
    new_node->data =data;
    prev_node->next =new_node;
    prev_node=new_node;
    
    return 1;
}

int main()
{   prev_node =head;
    //vector <int> v{2,1,3,5,6,4,7,8,1};
    vector <int> v{1,2,3,4,5,6,7
    };
    for(int i =0;i<v.size();i++)
    {
        add_node(v[i]);
    }
    rearranging(v);
    printing();
}