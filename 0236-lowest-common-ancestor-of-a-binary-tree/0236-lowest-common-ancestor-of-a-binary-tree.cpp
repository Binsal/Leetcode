/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
//     bool lr(TreeNode *root,TreeNode *p,TreeNode *q){
        
//     }
    
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return root;
        if(root->val==p->val || root->val==q->val)
        
        {
            return root;
        }
        
       
        TreeNode *l= lowestCommonAncestor(root->left,p,q);
        TreeNode *r=lowestCommonAncestor(root->right,p,q);
        
        
       if(l==NULL){
           return r;
       }
       else if(r==NULL){
           return l;
       }
       else{
          return root; 
       }
       
       return root;
    }
};