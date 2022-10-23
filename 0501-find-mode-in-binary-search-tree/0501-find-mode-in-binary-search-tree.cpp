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
    map<int,int> mp;
    void fun(TreeNode* r){
    if(!r) return;
        mp[r->val]++;
        fun(r->left);
        fun(r->right);
    }
    vector<int> findMode(TreeNode* root) {
        fun(root);
        vector<int> ans;
        int top=INT_MIN;
        for(auto it:mp) top=max(it.second,top);
        for(auto it:mp) {
            if(top==it.second) ans.push_back(it.first);
        }
        return ans;
    }
};