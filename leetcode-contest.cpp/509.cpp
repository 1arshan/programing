#include<bits/stdc++.h>
using namespace std;


class ListNode
{
    public:
    int data;
    ListNode *next;
};

int fib(int n) {
        ListNode *l1 =new ListNode;
        ListNode *head =l1;
        l1->data=1;
        ListNode *l2 =new ListNode;
        l2->data=0;
        l1->next=l2;
        l2->next=l1;
        int i=0;
        for(i=2;i<=n;i++)
        {
            head->next->data+=head->data;
            head=head->next;

        }
        i =head->data;
        delete(l1);
        delete(l2);
        return i;
        //for(int i=1)
    }


int main()
{
    int temp =fib(30);
    cout<<temp;
}