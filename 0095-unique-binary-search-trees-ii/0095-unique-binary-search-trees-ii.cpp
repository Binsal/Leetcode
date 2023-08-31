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
    
    vector<TreeNode*>rec(int st,int end){
        if(st>end)return {NULL};
        
        if(st==end){
            TreeNode *root=new TreeNode(st);
            return {root};
        }
        
        vector<TreeNode*>result;
        
        for(int i=st;i<=end;i++){
            
          
            
            vector<TreeNode*>left_sub=rec(st,i-1);
            vector<TreeNode *>right_sub=rec(i+1,end);
            
            for(auto lt:left_sub){
                for(auto rt:right_sub){
                    
                    TreeNode *root=new TreeNode(i);
                    
                    root->left=lt;
                    root->right=rt;
                    
                    result.push_back(root);
                    
                }
            }
            
        }
        
        return result;
        
    }
    vector<TreeNode*> generateTrees(int n) {
        return rec(1,n);
    }
};