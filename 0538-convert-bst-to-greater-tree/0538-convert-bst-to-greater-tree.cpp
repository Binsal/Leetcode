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
    
    void rec(TreeNode* root,int &v){
        if(!root)return ;
        
        rec(root->right,v);
        root->val=v+root->val;
        
        v=root->val;
        
        rec(root->left,v);
    }
    TreeNode* convertBST(TreeNode* root) {
        int val=0;
        rec(root,val);
        return root;
    }
};