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
    //map<TreeNode*,int> mp;
    int curr_sum=0;
    
    void fun(TreeNode* r){
        if(!r) return ;
        fun(r->right);
        curr_sum+=r->val;
      //  mp[r]=curr_sum;
        r->val=curr_sum;
        fun(r->left);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        fun(root);
        return root;
    }
};