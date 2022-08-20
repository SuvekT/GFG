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
    void deleteNode(ListNode* node) {
        ListNode* nxt=node->next;
        ListNode* prev=node;
        while(nxt){
         node->val=nxt->val;
            prev=node;
            node=nxt;
            nxt=nxt->next;
        }
        prev->next=NULL;
       // node->next=NULL;
        //delete node;
    }
};