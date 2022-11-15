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
    int num=0;
    void fun(TreeNode* r){
        if(!r) return;
        fun(r->left);
        num++;
        fun(r->right);
    }
    int countNodes(TreeNode* root) {
       fun(root);
        return num;
    }
};