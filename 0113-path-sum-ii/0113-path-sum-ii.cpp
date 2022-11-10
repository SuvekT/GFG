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
      vector<vector<int>> ans;
    void fun(vector<int> &temp,TreeNode* r,int sum,int ts){
        
       if(!r) return;
        temp.push_back(r->val);
        sum+=r->val;
        if(!r->left && !r->right) {
           if(sum==ts) ans.push_back(temp);
        }  
        fun(temp,r->left,sum,ts);
       fun(temp,r->right,sum,ts);
    temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        fun(temp,root,0,targetSum);
        return ans;
    }
};
