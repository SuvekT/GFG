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
    void fun(vector<int> &ans,TreeNode* r,int lev){
        if(!r) return;
        if(lev-1==ans.size()){// insert element
          ans.push_back(r->val);
        }
        fun(ans,r->right,lev+1);
        fun(ans,r->left,lev+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int lev=1;
        vector<int> ans;
        fun(ans,root,lev);
        return ans;
    }
};