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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head || !head->next) return head;
        int cnt=1;
        ListNode* t=head;
        while(t->next){
            t=t->next;
            cnt++;
        }
        k=k%cnt;
        while(k>0){
            ListNode* t=head;
            ListNode* slast=head;
            while(t->next!=nullptr){
                slast=t;
                t=t->next;
            }
            slast->next=NULL;
            t->next=head;
            head=t;
            k--;
        }
        return head;
    }
};
