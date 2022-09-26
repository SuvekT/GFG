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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size=q.size();
            vector<int> v;
            for(int i=0;i<size;i++){
            TreeNode* temp=q.front();
            q.pop();
           // vector<int> v;
            v.push_back(temp->val);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            }
            if(level%2==0){ // left to right
                ans.push_back(v);
            }
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            v.clear();
            level++;
        }
        
        return ans;
    }
};