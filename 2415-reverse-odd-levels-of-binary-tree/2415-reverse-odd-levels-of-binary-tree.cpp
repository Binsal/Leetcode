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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root)return NULL;
        
        int i=0;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            if(i%2==0){
                int sz=q.size();
                
                for(int i=0;i<sz;i++){
                    TreeNode *nde=q.front();
                    q.pop();
                    
                    if(nde->left)q.push(nde->left);
                    if(nde->right)q.push(nde->right);
                }
            }
            
            else{
                int sz=q.size();
                stack<int>st;
                
                for(int i=0;i<sz;i++){
                    TreeNode *nde=q.front();
                    q.pop();
                    
                    st.push(nde->val);
                    q.push(nde);
                }
                
                 for(int i=0;i<sz;i++){
                    TreeNode *nde=q.front();
                     nde->val=st.top();
                     st.pop();
                    q.pop();
                    
                    if(nde->left)q.push(nde->left);
                    if(nde->right)q.push(nde->right);
                }
            }
            
            i++;
        }
        
        
        return root;
    }
};