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
class Solution {
public:
    int ele;
    vector<int> v;
    void inorder(TreeNode* r,int k){
        if(r==NULL) return;
        inorder(r->left,k);
        v.push_back(r->val);
        if(v.size()==k) {
            ele=r->val;
            return;
        }
        inorder(r->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ele;
    }
};