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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        if(!root){
            return v;
        }
        
        TreeNode *curr=root;
        
        while(curr!=NULL){
           if(curr->left==NULL){
               v.push_back(curr->val);
               curr=curr->right;
           }
           else{
               TreeNode *prev=curr->left;
               
               while(prev->right && prev->right!=curr){
                   prev=prev->right;
               }
               
               if(prev->right==NULL){
                   prev->right=curr;
                   curr=curr->left;
               }
               else{
                   prev->right=NULL;
                   v.push_back(curr->val);
                   curr=curr->right;
               }
           }
        }
        
        
        return v;
    }
};