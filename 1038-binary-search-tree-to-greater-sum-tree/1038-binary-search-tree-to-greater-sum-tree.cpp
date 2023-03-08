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
    
//     void inorder(TreeNode *root,vector<int>&v){
//         if(!root){
//             return ;
//         }
        
//         inorder(root->left,v);
//         v.push_back(root->val);
//         inorder(root->right,v);    
        
//     }
    
//     void val(TreeNode *root,vector<int>&v,int &i){
//         if(i==v.size()){
//             return ;
//         }
        
//         if(!root)return ;
//         val(root->left,v,i+1);
//         root->val=v[i];
//         val(root->right,v,i+1);
        
//     }
    
    
    int sum=0;
    
    TreeNode* bstToGst(TreeNode* root) {
        TreeNode *node=root;
        TreeNode *nde=root;
        TreeNode *ne=root;
        
         if(!root)return NULL ;
        
       bstToGst(root->right);
        sum+=root->val;
        root->val=sum;
       bstToGst(root->left);
        
        
        return ne;
    }
};