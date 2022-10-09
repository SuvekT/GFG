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
    bool fun(TreeNode* r,int k,map<int,int> &mp){
     if(r==NULL) return false;
        if(mp.find(k-(r->val))!=mp.end()){
            return true;
        }
        else{
            mp[r->val]++;
            return (fun(r->left,k,mp) || fun(r->right,k,mp));
        }
    }
    bool findTarget(TreeNode* root, int k) {
        map<int,int> mp;
        return fun(root,k,mp);
    }
};
/*
k= 9 
mp  5 3 2 


*/