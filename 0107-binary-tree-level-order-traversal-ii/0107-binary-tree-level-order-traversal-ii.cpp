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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        if(!root)return v;
        queue<TreeNode*>q;
        q.push(root);
        
        stack<vector<int>>st;
        
        while(!q.empty()){
            vector<int>vec;
            int sz=q.size();
            
            for(int i=0;i<sz;i++){
                vec.push_back(q.front()->val);

                TreeNode *node=q.front();
                q.pop();

                if(node->left){
                    q.push(node->left);
                }
                
                if(node->right){
                    q.push(node->right);
                }
            }
            
            st.push(vec);
        }
        
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        
        return v;   
    }
};