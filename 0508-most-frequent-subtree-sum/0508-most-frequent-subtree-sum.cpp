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
    
    int rec(TreeNode*root){
        if(!root)return 0;
        int leftsum=rec(root->left);
        int rightsum=rec(root->right);
        int sum=leftsum+rightsum+root->val;
        
        mp[sum]++;
        
        return sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>ans;
        rec(root);
        int maxi=0;
        
        for(auto x:mp){
            maxi=max(maxi,x.second);
        }
        
        for(auto x:mp){
            if(x.second==maxi)ans.push_back(x.first);
        }
        
        return ans;
    }
};