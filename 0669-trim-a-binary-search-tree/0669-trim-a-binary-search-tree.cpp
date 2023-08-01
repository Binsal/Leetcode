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
    
    TreeNode *trim(TreeNode *root,int low,int high){
        
        if(!root)return NULL;
        
        TreeNode *lft=trim(root->left,low,high);
        TreeNode *rgt=trim(root->right,low,high);
        
        if(root->val<low || root->val>high){
            if(root->val<low)return rgt;
            if(root->val>high)return lft;
        }
        
        if(root->left!=lft)root->left=lft;
        if(root->right!=rgt)root->right=rgt;
        
        
        return root;
        
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return trim(root,low,high) ;
    }
};