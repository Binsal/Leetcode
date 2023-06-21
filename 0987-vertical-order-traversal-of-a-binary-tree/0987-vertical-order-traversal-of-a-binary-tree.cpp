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
    
    void rec(TreeNode *rt, vector<vector<int>>&v,vector<int>&vec,int i,int j){
        
        if(!rt)return ;
        
        rec(rt->left,v,vec,i+1,j-1);
        v.push_back({rt->val,i,j});
        rec(rt->right,v,vec,i+1,j+1);
                
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>v;
        vector<int>vec;
        
        rec(root,v,vec,0,0);
        
        vector<vector<int>>ans;
        
        sort(v.begin(),v.end(),[&](const auto &v1,const auto &v2){
            if(v1[2]==v2[2]){
                if(v1[1]!=v2[1])return v1[1]<v2[1];
                else if(v1[1]==v2[1])return v1[0]<v2[0];
            }
            return v1[2]<v2[2];
        });
        
        for(int i=0;i<v.size();i++){
            vector<int>vect;
            int y_cord=v[i][2];
            
            while(i<v.size() && v[i][2]==y_cord){
                vect.push_back(v[i][0]);
                i++;
            }
            i--;
            
            
            ans.push_back(vect);
        }
        
        return ans;
    }
};