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
    void fun(TreeNode* r){
        if(r==NULL) return;
        fun(r->left);
        fun(r->right);
        TreeNode* t=r->left;
        r->left=r->right;
        r->right=t;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        fun(root);
        return root;
    }
};