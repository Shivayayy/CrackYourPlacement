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
    ListNode* partition(ListNode* head, int x) 
    {
        ListNode* less =new ListNode(-1);
        ListNode* more=new ListNode(-1);
        ListNode* f =less,*s =more,*trav =head;
        while(trav)
        {
            if(trav->val<x)
            {
                f->next =trav;
                trav= trav->next;
                f =f->next;
                f->next =nullptr;
            }
            else
            {
                s->next =trav;
                trav= trav->next;
                s =s->next;
                s->next =nullptr;
            }
        }
        f->next =more->next;
        return less->next;
    }
};