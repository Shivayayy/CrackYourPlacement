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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* dummy =new ListNode(-1);
        ListNode* trav =dummy;
        while(l1 && l2)
        {
            if(l1->val<=l2->val)
            {
                trav->next =l1;
                trav = l1;
                l1 =l1->next;
                trav->next =nullptr;
            }
            else
            {
                trav->next = l2;
                trav = l2;
                l2 =l2->next;
                trav->next =nullptr;
            }
        }
        if(l1)trav->next =l1;
        else if(l2)trav->next=l2;
        return dummy->next;
    }
};