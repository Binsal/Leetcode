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
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        
        if(!root)return v;
        queue<TreeNode*>q;
        q.push(root);
        
        
        while(!q.empty()){
            int sz=q.size();
            int maxi=INT_MIN;
            
            for(int i=0;i<sz;i++){
                maxi=max(maxi,q.front()->val);
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                if(q.front()->right){
                    q.push(q.front()->right);
                }
                
                q.pop();
            }
            
            v.push_back(maxi);
            
        }
        
        
        return v;
    }
};