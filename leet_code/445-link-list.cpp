#include<bits/stdc++.h>
using namespace std;


class ListNode
{
    public:
    int val;
    ListNode *next;

};

class NodeValue
{
    public:
    int data1;
    int data2;
};

int add_node(ListNode *l,vector<int> &v)
{   int i;
    ListNode *prev_node =l;
    for(i =0;i<v.size();i++)
    {   
        ListNode *new_node =new ListNode;
        new_node->val=v[i];
        prev_node->next =new_node;
        prev_node =new_node;
    }
}

int print_node(ListNode *l)
{
    ListNode *temp =l->next;
    //cout<<l->next->val;
    while(temp !=NULL)
    {
        cout<<temp->val<<" -> ";
        temp=temp->next;
        
        
    }
}

int node_addition(ListNode *l1,ListNode *l2,int carry)
{
    l2->val =l1->val+l2->val+carry;
    if(l2->val/10 !=0)
    {
        carry =l2->val/10;
        l2->val=l2->val%10;
    }
    else
    {
        carry =0;
    }
    
    return carry;
}


int node_traversal(ListNode *l1,ListNode *l2)
{
    int node_value1,node_value2 =0,carry =0;
    if(l1 !=NULL)
    {
        carry =node_traversal(l1->next,l2->next);
        carry = node_addition(l1,l2,carry);

    }
    else
    {
        
        return 0;
    }
    
    return carry;
    
}

int calulate_node_no(ListNode *l)
{
    
    int i =0;
    while (l!=NULL)
    {
        i++;
        l =l->next;
    }
    return i;
    
}

int main()
{
    //list creation
    ListNode *l1=new ListNode;
    ListNode *l2 =new ListNode;
    NodeValue *l3 =new NodeValue;
    vector<int> v1 ={7,2,4,3};
    vector<int> v2={5,8,4,8,6,8,9};
    add_node(l1,v1);
    add_node(l2,v2);
    //creation ended


    int l1_node_no,l2_node_no;//to calculate number of node in a list

    l1_node_no =calulate_node_no(l1->next);
    l2_node_no =calulate_node_no(l2->next);

    ListNode *bigger_list;
    ListNode *smaller_list;

    
    if (l1_node_no>l2_node_no)
    {
        bigger_list =l1_node_no; 
        smaller_list =l2_node_no;
    }
    else
    {
        smaller_list =l1_node_no;
        bigger_list =l2_node_no;
    }
    
    int diff =bigger_list-smaller_list //node number difference

    

    node_traversal(smaller_list,bigger_list);
    //print_node(l2);

}