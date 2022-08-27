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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<int> q;
        bool flag=0;
        
        while(l1 || l2){
            int sum=0;
            if(l1) sum+=l1->val;
            if(l2) sum+=l2->val;
            if(flag==1) sum++;
            if(sum>9){
                flag=1;
                sum=sum%10;
            }
            else flag=0;
            q.push(sum);
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        if(flag==1) q.push(1);
        ListNode* prev=NULL;
        ListNode* head=NULL;
        while(!q.empty()){
            ListNode* t=new ListNode(q.front());
            q.pop();
            if(prev) prev->next=t;
            prev=t;
            if(head==NULL) head=t;
        }
        return head;
    }
};