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
    void fun(TreeNode* r, set<int> &st){
      //  if(st.size()==2) return;
        if(r==nullptr) return;
        fun(r->left,st);
        st.insert(r->val);
        fun(r->right,st);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> st;
        fun(root,st);
        if(st.size()<2) return -1;
        auto it=st.begin();
        it++;
        return *it;
    }
};