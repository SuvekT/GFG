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
    void fun(vector<int> &ans, TreeNode* r){
        if(r==NULL)
            return;
        ans.push_back(r->val);
        fun(ans,r->left);
        fun(ans,r->right);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        fun(ans,root);
        return ans;
    }
};