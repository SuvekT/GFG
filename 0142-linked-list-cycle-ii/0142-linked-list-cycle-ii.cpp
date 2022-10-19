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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,bool> mp;
        while(head)
        {
            if(mp.count(head))
             return head;
            else
            {
              mp[head]=true;
              head=head->next;
            }
        }
        return NULL;
    }
};