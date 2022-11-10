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
    void reorderList(ListNode* head) {
        ListNode* f=head,*s=head;
        while(f && f->next){
          f=f->next->next;
            s=s->next;
        }
        if(f!=nullptr) s=s->next;
        ListNode* t=s;
        stack<ListNode*> st;
        while(t) st.push(t),t=t->next;
        t=head;
        while(!st.empty() && t->next!=s){
            ListNode* t2=t->next;
            t->next=st.top();
            st.top()->next=t2;
            st.pop();
            t=t2;
        }
        if(st.empty()){
         t->next=nullptr;
        }
        else{
           st.top()->next=nullptr; 
        }
    }
};
/* 
4  
1->5->2
*/