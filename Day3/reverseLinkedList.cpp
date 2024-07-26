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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        ListNode* dummy =new ListNode(-1);
        dummy->next =head;
        ListNode* trav =head;
        int count = 1;
        ListNode* start = dummy;
        while(trav && count !=left)
        {
            start =trav;
            trav =trav->next;
            count =count+1;
        }
        ListNode* prev =nullptr;
        ListNode* end =trav;
        ListNode* nxt;
        cout<<trav->val<<endl;
        while(trav && count!=right+1)
        {
            nxt = trav->next;
            trav->next =prev;
            prev =trav;
            trav =nxt;
            count =count+1;
        }
        start->next =prev;
        end->next =nxt;
        return dummy->next;



    }
};