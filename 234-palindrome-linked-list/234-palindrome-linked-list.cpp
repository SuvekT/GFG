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
    bool isPalindrome(ListNode* head) {
        vector<int> num;
        ListNode* temp=head;
        while(temp){
            num.push_back(temp->val);
            //num+=temp->val;
            temp=temp->next;
}
        vector<int> num1;
        for(int i=num.size()-1;i>=0;i--){
            num1.push_back(num[i]);
        }
       //vector<int> num1=reverse(num.begin(),num.end());
         for(int i=0;i<num.size();i++){
             if(num[i]!=num1[i]) return false;
         }
        return true;
    }
};

/*
brutforce : use of vector S.C. = O(n)
num2=1221

*/