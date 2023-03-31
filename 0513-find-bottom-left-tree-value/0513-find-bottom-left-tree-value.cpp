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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int val;
        
        while(!q.empty()){
            int sz=q.size();
            
            for(int i=0;i<sz;i++){
                if(i==0 ){
                    val=q.front()->val;
                }
                
                auto nde=q.front();
                q.pop();
                
                if(nde->left)q.push(nde->left);
                if(nde->right)q.push(nde->right);
            }
            
        }
        
        return val;
    }
};