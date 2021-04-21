/*
1 sorted link list
2 highest per value weight
*/

#include<bits/stdc++.h>
using namespace std;


class ListNode
{   
    public:
    double val_per_weight;
    int index;
    ListNode *next;

};

ListNode *insert_value(ListNode *temp,double val_per_weight,int index)
{
    if (temp!=NULL)
    {
        if(temp->val_per_weight<val_per_weight)
        {   
            ListNode *new_node=new ListNode;
            new_node->val_per_weight=val_per_weight;
            new_node->index=index;
            new_node->next=temp;
            return new_node;
        }
        else
        {
            temp->next=insert_value(temp->next,val_per_weight,index);
        }
    }
    else
    {
        ListNode *new_node=new ListNode;
        new_node->val_per_weight=val_per_weight;
        new_node->index=index;
        return new_node;
    }
    return temp;
}


int print_link_list(ListNode *temp)
{
    temp=temp->next;
    while(temp!=NULL)
    {
        cout<<temp->val_per_weight<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}


int insert_knapsack(int w,int weight[],int value[],ListNode *head,int output)
{
    ListNode *temp=head;


}


int per_weighted_value(int n,int w,int weight[],int value[],ListNode *head)
{
    ListNode *temp=head;
    double cur_val;
    double cur_weight;
    for(int i =0;i<n;i++)
    {  
        if(weight[i]<w)
        {   cur_val =value[i];
            cur_weight =weight[i];
            temp->next=insert_value(temp->next,cur_val/cur_weight,i);
        }
    }

    insert_knapsack(n,w,weight,value,head,0);
}



int main()
{
    int n=6,w=5;
    int value[]={3,2,4,5,2,3};
    int weight[]={4,5,1,2,4,2};
    ListNode *head=new ListNode;
    per_weighted_value(n,w,weight,value,head);
    print_link_list(head);

}