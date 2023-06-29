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
    
    bool rec(TreeNode *root1,TreeNode *root2){
        if(!root1 && !root2)return true;
        if(!root1 || !root2)return false;
        
        if(root1->val!=root2->val)return false;
       
            return rec(root1->left,root2->left)&& rec(root1->right,root2->right) || rec(root1->left,root2->right) && rec(root1->right,root2->left);
    
    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        
        return rec(root1,root2) ;
    }
};