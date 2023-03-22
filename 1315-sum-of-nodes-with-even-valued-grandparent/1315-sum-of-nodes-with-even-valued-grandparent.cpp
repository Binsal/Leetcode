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
    
    int fun(TreeNode *nde){
        int ans=0;
        
        if(nde->left!=NULL){
            if(nde->left->left!=NULL){
                ans+=nde->left->left->val;
            }
             if(nde->left->right!=NULL){
            ans+=nde->left->right->val;
        }
        
        }
        
        if(nde->right!=NULL){
            if(nde->right->left!=NULL){
                ans+=nde->right->left->val;
            }


            if(nde->right->right!=NULL){
                ans+=nde->right->right->val;
            }
        }
        return ans;
    }
    
    int sum=0;
    
    int sumEvenGrandparent(TreeNode* root) {
        
        TreeNode *node=root;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int sz=q.size();
            
            for(int i=0;i<sz;i++){
                TreeNode*nde=q.front();
                q.pop();
                
                if(nde->val%2==0){
                    sum+=fun(nde);
                }
                
                if(nde->left!=NULL){
                    q.push(nde->left);
                }
                
                if(nde->right!=NULL){
                    q.push(nde->right);
                }
            }
        }
        
        return sum;
    }
};