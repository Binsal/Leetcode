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
    
    int ans=INT_MIN;
    void dfs(TreeNode *root,int maxi,int mini){
        
        if(root==NULL)return ;
         
        maxi=max(root->val,maxi);
        mini=min(root->val,mini);
        ans=max(ans,abs(maxi-mini));
    
        
        dfs(root->left,maxi,mini);
        
        dfs(root->right,maxi,mini);
        
    }
    
    int maxAncestorDiff(TreeNode* root) {
        
        int maxi=INT_MIN;
        int mini=INT_MAX;
      
        
        dfs(root,maxi,mini);
       
       return ans;
    }
};