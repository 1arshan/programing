/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *temp;
    
    ListNode *findnode(ListNode *sp)
    {
        if(sp==temp)
            return sp;
        else
        {
            temp=temp->next;
            return findnode(sp->next);
        }
    }
    
    int checkcycle(ListNode *pf,ListNode *ps)
    {
        if(pf==NULL || pf->next==NULL)
           return -1;
        ps=ps->next;
        pf=pf->next->next;
           
        if(ps==pf)
        {
            temp=ps;
            return 1;}
        else
           return checkcycle(pf,ps);
    }
    
    ListNode *detectCycle(ListNode *head) {
        cout<<checkcycle(head,head);
        if (checkcycle(head,head)==-1)
            return NULL;
        else
        {
            return findnode(head);
        }
        // return head;
    }
};