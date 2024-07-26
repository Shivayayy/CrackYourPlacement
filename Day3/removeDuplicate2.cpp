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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* dummy =new ListNode(-1);
        ListNode* run =dummy;
        ListNode* trav =head;
        while(trav)
        {
            ListNode* sec =trav->next;
            bool isDup =false;
            while(sec&&sec->val == trav->val)
            {
                isDup=true;
                sec =sec->next;
            }
            if(!isDup)
            {
                //cout<<trav->val<<endl;
                run->next = trav;
                run =run->next;
                run->next =nullptr;
            }
            trav = sec;
        }
        return dummy->next;
    }
};