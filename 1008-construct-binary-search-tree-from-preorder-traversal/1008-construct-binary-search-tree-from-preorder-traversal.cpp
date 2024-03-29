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
    int i=0;
    
    TreeNode *rec(vector<int>&preorder,int bound=INT_MAX){
        if(i==preorder.size() || preorder[i]>bound)return NULL;
        
        TreeNode *root=new TreeNode (preorder[i]);
        i++;
       
        root->left=rec(preorder,root->val);
        root->right=rec(preorder,bound);
         
        return root;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        return rec(preorder);
    }
};