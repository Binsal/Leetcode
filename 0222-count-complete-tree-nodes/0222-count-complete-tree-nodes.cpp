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
    int countNodes(TreeNode* root) {
        if(!root)return 0;
        int count=0;
        int count2=0;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int sz=q.size();
           count2=0;
            bool flag=0;
           
            
            for(int i=0;i<sz;i++){
                TreeNode *nde=q.front();
                q.pop();
                count2++;
                
                 if(nde->left){
                    q.push(nde->left);
                }
                if(nde->right){
                    q.push(nde->right);
                }
                
                if(nde->left==NULL|| nde->right==NULL){
                    flag=1;
                    break;
                }
               
            }
            
            count+=count2;
            if(flag==1)break;
        
        }
        
        count+=q.size();
        
        
        return count;
    }
};