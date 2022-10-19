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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr && list2==nullptr )
            return nullptr;
        else if(list1==nullptr)
            return list2;
        ListNode* t1=list1;
        ListNode* t2=list2;
        vector<int> v;
        while(t1){
            v.push_back(t1->val);
             t1=t1->next;
        }
        while(t2){
              v.push_back(t2->val);
             t2=t2->next;
        }
        sort(v.begin(),v.end());
        t1=list1;
        t2=list2;
        int i=0;
        ListNode* temp=list1;
        while(t1){
            t1->val=v[i];
            i++;
            t1=t1->next;
        }
        while(t2){
            t2->val=v[i];
            i++;
            t2=t2->next;
        } 
        while(temp->next){
            temp=temp->next;
        }
        temp->next=list2;
        return list1;
    }
};