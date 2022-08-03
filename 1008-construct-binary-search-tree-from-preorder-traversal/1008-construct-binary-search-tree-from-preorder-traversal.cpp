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
       void insert(TreeNode* r,int data){
        if(r->val<data){
            if(r->right!=NULL)
            insert(r->right,data);
            else{
                TreeNode *t=new TreeNode(data);
                r->right=t;
                return;
            }
        }
        else{
            if(r->left!=NULL)
            insert(r->left,data);
            else{
                TreeNode* t=new TreeNode(data);
                r->left=t;
                return;
            }
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0)
            return nullptr;
        TreeNode* root= new TreeNode(preorder[0]);
        for(int i=1;i<preorder.size();i++){
            insert(root,preorder[i]);
        }
        return root;
    }
};