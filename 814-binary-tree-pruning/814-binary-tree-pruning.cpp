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
   /* bool check(TreeNode* r){
        if(!r) return false;
        else if(r->val==1) return true;
        else{
            return (check(r->left) || check(r->right));
        }
    }
    void fun(TreeNode* r){
        if(!check(r->right)){ // no 1 present
            r->right=NULL;
        }
        if(!check(r->left)){
            r->left=NULL;
        }
      if(r->right)  fun(r->right);
      if(r->left)  fun(r->left);
        return;
    }
    */
    TreeNode* pruneTree(TreeNode* root) {
        if(root!=NULL){
            root->left=pruneTree(root->left);
            root->right=pruneTree(root->right);
            if(!root->left && !root->right && root->val==0)
                return NULL;
        }
        return root;
    }
};