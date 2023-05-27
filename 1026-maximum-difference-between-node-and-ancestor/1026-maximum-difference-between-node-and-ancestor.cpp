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
    
    void dfs(TreeNode *root,int maxi,int mini,int &ans){
        
        if(root==NULL)return ;
         
        maxi=max(root->val,maxi);
        mini=min(root->val,mini);
        ans=max(ans,abs(maxi-mini));
        
        int initmax=maxi;
        int initmini=mini;
        
        dfs(root->left,maxi,mini,ans);
        
        maxi=initmax;
        mini=initmini;
        
        dfs(root->right,maxi,mini,ans);
        
    }
    
    int maxAncestorDiff(TreeNode* root) {
        
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int ans=INT_MIN;
        
        dfs(root,maxi,mini,ans);
       
       return ans;
    }
};