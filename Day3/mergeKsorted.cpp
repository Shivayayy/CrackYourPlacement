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
    ListNode* merger(ListNode* headA,ListNode* headB)
    {
        ListNode* fir =headA, *sec =headB;
        ListNode* dummy =new ListNode(-1);
        ListNode* rev =dummy;
        while(fir && sec)
        {
            if(fir->val<sec->val)
            {
                rev->next =fir;
                fir =fir->next;
                rev =rev->next;
                rev->next =nullptr;
            }
            else
            {
                rev->next =sec;
                sec =sec->next;
                rev =rev->next;
                rev->next =nullptr;
            }
        }
        if(fir)rev->next =fir;
        else if(sec)rev->next =sec;
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(!lists.size())return nullptr;
        ListNode* first =lists[0];
        for(int i=1;i<lists.size();i++)
        {
            ListNode* second = lists[i];
            first =merger(first,second);
        }
        return first;
    }
};