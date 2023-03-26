/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        queue<TreeNode*>q;
        q.push(cloned);
        
        
        while(!q.empty()){
            int sz=q.size();
            
            for(int i=0;i<sz;i++){
                auto node=q.front();
                q.pop();
                
                if(node->val==target->val){
                    return node;
                }
                
                if(node->left){
                    q.push(node->left);
                }
                
                if(node->right){
                    q.push(node->right);
                }
            }
            
        }
        
        return NULL;
    }
};