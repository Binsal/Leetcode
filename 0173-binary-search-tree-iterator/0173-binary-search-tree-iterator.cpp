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
class BSTIterator {
public:
    
    vector<int>vec;
    
    void inorder(TreeNode *root){
        if(root==NULL)return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    
    int i=0;
   
    
    BSTIterator(TreeNode* root) {
        inorder(root);
        sort(vec.begin(),vec.end());
    }
    
    int next() {
        
        return vec[i++];
    }
    
    bool hasNext() {
        
        if(i<vec.size())return true;
        return false;
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */