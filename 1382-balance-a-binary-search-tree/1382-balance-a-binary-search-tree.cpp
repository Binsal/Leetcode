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
    
   void rec(TreeNode *root,vector<int>&v){
       if(root==NULL)return;
       rec(root->left,v);
       v.push_back(root->val);
       rec(root->right,v);
   }
    
    TreeNode *build(int i,int j,vector<int>&v){
        if(i>j)return NULL;
        int mid=(i+j)/2;
        
        TreeNode *rt=new TreeNode(v[mid]);
        rt->left=build(i,mid-1,v);
        rt->right=build(mid+1,j,v);
        
        return rt;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
       vector<int>v;
       rec(root,v);   
       TreeNode *rt=build(0,v.size()-1,v);
        
        return rt;
    }
    
    
};