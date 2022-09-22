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
    int sum=0;
    void fun(TreeNode* r,bool left_flag){
        
        if(!r->left && !r->right){
            if(left_flag) sum+=r->val;
                        return;}
        
      if(r->left)  fun(r->left,true);
        if(r->right) fun(r->right,false);
        return;
    }
    int sumOfLeftLeaves(TreeNode* r) {
        //int sum=0;
        fun(r,false);
        return sum;
    }
};