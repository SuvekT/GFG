/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void solve(vector<int> &v,Node* r){
        if(r==NULL)
            return;
        v.push_back(r->val);
        for(Node* child: r->children){
            solve(v,child);
        }
    }
    vector<int> preorder(Node* root) {
      vector<int> v;
        solve(v,root);
        return v;
    }
};

/*
      for (Node* child : root -> children) {
            travel(child, result);
        }

*/