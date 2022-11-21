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
    int ans=0;
    int fun(TreeNode* r){
        if(!r) return 0;
        int l_h=fun(r->left);
        int r_h=fun(r->right);
        ans=max(ans,1+l_h+r_h);
        return 1+max(l_h,r_h);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int h=fun(root);
        return (ans-1);
    }
};