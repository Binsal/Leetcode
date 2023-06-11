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
    
 
    vector<int>vec;

    void inorder(TreeNode *root){
        if(root==NULL)return ;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        inorder(root);
        for(int i=0;i<vec.size();i++){
            //cout<<vec[i]<<endl;
            if(find(vec.begin(),vec.end(),k-vec[i])!=vec.end() && find(vec.begin(),vec.end(),k-vec[i])-vec.begin()!=i)return true;
        }
        
        return false;
    }
};