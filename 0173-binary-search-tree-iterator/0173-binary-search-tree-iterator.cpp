/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    vector<int> v;
    void inorder(TreeNode* r){
        if(!r) return;
        inorder(r->left);
        v.push_back(r->val);
        inorder(r->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        int temp=v[0];
        v.erase(v.begin());
        return temp;
    }
    
    bool hasNext() {
        if(v.size()>0) return true;
        else return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */