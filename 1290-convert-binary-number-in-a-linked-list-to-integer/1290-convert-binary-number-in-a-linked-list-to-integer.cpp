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
    int getDecimalValue(ListNode* head) {
        if(!head->next) return head->val;
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int num=0;
        int k=v.size()-1;
        for(auto it:v){
            num=num+(it*pow(2,k));
            k--;
        }
        return num;
    }
};