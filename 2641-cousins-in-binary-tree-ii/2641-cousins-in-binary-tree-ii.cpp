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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*>q;
        TreeNode *node=root;
        q.push(root);
        
        root->val=0;
        
        while(!q.empty()){
            int sz=q.size();
           
            int sumT=0;
            
            map<TreeNode*,int>mp;
            
            for(int i=0;i<sz;i++){
                 int sum=0;
                TreeNode *nde=q.front();
                q.pop();
                
                if(nde->left){
                    q.push(nde->left);
                    sum+=nde->left->val;
                    nde->left->val=0;
                }
                
                if(nde->right){
                    q.push(nde->right);
                    sum+=nde->right->val;
                    nde->right->val=0;
                }
                
                mp.insert({nde,sum});
                sumT+=sum;
            }
            
            if(mp.size()>1){
                
                for(auto node:mp){
                    
                    if(node.first->left!=NULL)node.first->left->val=sumT-node.second;
                    if(node.first->right!=NULL)node.first->right->val=sumT-node.second;
                }
            }
        }
        
        return node;
    }
};