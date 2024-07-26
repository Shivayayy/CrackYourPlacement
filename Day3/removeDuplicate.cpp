/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(!head)return nullptr;
        ListNode* l =head;
        ListNode* trav =head->next;
        while(trav)
        {
            bool loop =false;
            while(trav && trav->val == l->val)
            {
                loop =true;
                trav =trav->next;
            }
            l->next = trav;
            l =l->next;
            if(!loop)trav =trav->next;
        }
        return head;
    }
};