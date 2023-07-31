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
    int count=0;
    
    vector<int>rec(TreeNode* root,int distance){
        
        if(!root)return {0};
        if(!root->left && !root->right)return {1};
        
        vector<int>left=rec(root->left,distance);
        vector<int>right=rec(root->right,distance);
        
        for(auto l:left){
            for(auto r:right){
                if(l>0 && r>0 && l+r<=distance)count++;
            }
        }
        
        vector<int>ans;
        
        for(auto l:left){
            if(l>0 && l<distance)ans.push_back(l+1);
        }
        for(auto l:right){
            if(l>0 && l<distance)ans.push_back(l+1);
        }
        
        return ans;
        
    }
    
    int countPairs(TreeNode* root, int distance) {
        rec(root,distance);
        return count;
    }
};