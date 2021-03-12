#include<bits/stdc++.h>
using namespace std;


class LinkNode
{
    public:
    int val;
    LinkNode *next;
};

class LinkList
{
    private:

    LinkNode *prev_node=new LinkNode;

    public:

    int link_additon(int data)
    {
        LinkNode *new_node=new LinkNode;
        new_node->val=data;
        prev_node->next=new_node;   
    }

    int link_deletion()
    {

    }
};

int main()
{
    LinkNode *head;
    cout<<"1 for add"<<endl;
    cout<<"2 for del"<<endl;
    LinkList l;
    int data;
    int option;
    
    for(int i=0;i<100;i++)
    {
        cout<<"1 for add"<<endl;
        cout<<"2 for del"<<endl;
        cout<<"3 for exit"<<endl;
        cout<<"4 for printing the list"<<endl;
        cin>>option;
        
        switch (option)
        {
        case 1:
            cout>>"enter data"<<endl;
            cin>>data;
            if(i==0)
        {
            head=
        }
            break;
        
        case 2:
            break;

        case 3:
            break;
        
        case 4:
            break;

        }
    }
    
}