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
    
    map<int,int>mp;
    int maxi=INT_MIN;
    
    void rec(TreeNode *root){
        if(root==NULL)return;
        rec(root->left);
        mp[root->val]++;
        maxi=max(maxi,mp[root->val]);
        // cout<<root->val <<" "<<mp[root->val]<<endl;
        rec(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        rec(root);
        
        for(auto p:mp){
            if(p.second==maxi)ans.push_back(p.first);
        }
        return ans;
    }
};