/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode *inorder(vector<int>&vec,int i,int j){
     
        if(i>j)return NULL;
        //cout<<i<<" "<<j<<endl;
        TreeNode *nde=new TreeNode(vec[(i+j)/2]);
        
        
        nde->left=inorder(vec,i,(i+j)/2-1);
        nde->right=inorder(vec,(i+j)/2+1,j);
        
        return nde;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head)return NULL;
        
        vector<int>vec;
        
        while(head){
            vec.push_back(head->val);
            head=head->next;
        }
       
        sort(vec.begin(),vec.end());
        
        return inorder(vec,0,vec.size()-1);
    }
};