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
    void fun(string &s,TreeNode* r){
        if(!r) return;
        s+=to_string(r->val);
        if(r->left){
            s+="(";
            fun(s,r->left);
            s+=")";
        }
      /*  else if(!r->left && r->right){
            s+="()";
            return;
        } */
   /*     else{
            s+=")";
            return;
        } */
        if(r->right){
            if (!r->left) s+= "()";
              s+="(";
            fun(s,r->right);
            s+=")";
        }
        
           /* s+=")";
            return; */
        
    }
    string tree2str(TreeNode* root) {
        string s="";
       // string ans="";
        fun(s,root);
        return s;
    }
};
/*
s=1(2(4))(3)

*/