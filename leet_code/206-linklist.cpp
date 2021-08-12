/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *h;
    ListNode* reversel(ListNode *temp)
    {
        ListNode* prev=temp;
        temp=temp->next;
        
        if(temp->next==NULL)
        {
            h=temp;
            temp->next=prev;
            return prev;
        }
        else
        {
            reversel(temp);
            temp->next=prev;
            return prev;
        }
    }
    
    ListNode* reverseList(ListNode* head) {
        if(head==NULL ||head->next==NULL)
           return head;
        ListNode *temp=reversel(head);
        temp->next=NULL;
        return h;
    }
};