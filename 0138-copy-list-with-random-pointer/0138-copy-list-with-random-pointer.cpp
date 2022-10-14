/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> mp;
        Node* t=head;
        Node* new_head=NULL;
        while(t){
            Node *n=new Node(t->val);
            if(!new_head) new_head=n;
            mp[t]=n;
            t=t->next;
        }
        t=head;
        while(t){
            mp[t]->next=mp[t->next];
            mp[t]->random=mp[t->random];
            t=t->next;
        }
        return new_head;
    }
};