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
    ListNode* partition(ListNode* head, int x) {
        if(!head)
        return head;

        ListNode* smallH=new ListNode();
        ListNode* smallT=smallH;

        ListNode* bigH=new ListNode();
        ListNode* bigT=bigH;

        ListNode* curr=head;

        while(curr)
        {
            if(curr->val<x)
            {
                smallT->next=curr;
                smallT=smallT->next;
            }
            else
            {
                bigT->next=curr;
                bigT=bigT->next;
            }
            curr=curr->next;
        }
        bigT->next=NULL;
        smallT->next=bigH->next;
        head=smallH->next;
        return head;
    }
};