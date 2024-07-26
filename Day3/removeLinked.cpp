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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy =new ListNode(-1);
        dummy->next =head;
        ListNode* trav =head;
        ListNode* prev =dummy;
        while(trav)
        {
            if(trav->val!=val)
            {
                prev->next =trav;
                prev =trav;
            }
            else prev->next =nullptr;
            trav =trav->next;   
        }
        return dummy->next;
    }
};