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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return nullptr;
        ListNode* o,*e,*e_head;
        o=head;
        e=head->next;
        e_head=head->next;
        while(o->next && e->next){
             
            o->next=o->next->next;
            o=o->next;
            e->next=e->next->next;
            e=e->next;
        }
        o->next=e_head;
        return head;
    }
};