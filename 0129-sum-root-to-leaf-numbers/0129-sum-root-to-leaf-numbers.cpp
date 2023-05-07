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
    
    int ans=0;
    
    void dfs(TreeNode* root,int num){
        
        if(root==NULL)return;
        
        num=num*10+root->val;
        
        if(root->left==NULL && root->right==NULL){
            ans+=num;
            cout<<num<<endl;
            return;
        }
        
        
        // if(root->left==NULL){
        //      ans+=num;
        // }
        // if(root->right==NULL){
        //     ans+=num;
        // }
        
      //  if(root->left==NULL && root->right==NULL)return;
        dfs(root->left,num);
        dfs(root->right,num);
        
    }
    
    int sumNumbers(TreeNode* root) {
        int num=0;
        
        dfs(root,num);
        
        return ans;
    }
};
