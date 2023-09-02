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
    vector<TreeNode*>ans;
    
    TreeNode *dfs(TreeNode *root,vector<int>&to_delete){
            
        if(!root)return NULL;
        
        TreeNode *lft=dfs(root->left,to_delete);
        TreeNode *rgt=dfs(root->right,to_delete);
        
        if(lft==NULL)root->left=NULL;
        if(rgt==NULL)root->right=NULL;
        
        if(find(to_delete.begin(),to_delete.end(),root->val)!=to_delete.end()){
            
            if(root->left){
                ans.push_back(root->left);
            }
            
            if(root->right){
                ans.push_back(root->right);
            }
            
            return NULL;
        }
        
        return root;
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        TreeNode *rt=dfs(root,to_delete);
        
        if(rt)ans.push_back(rt);
        return ans;
    }
};