class Solution {
public:
    
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int ans=INT_MAX;
        
        vector<int>rw(mat.size(),0);
        vector<int>cl(mat[0].size(),0);
        
        map<int,pair<int,int>>mp;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mp.insert({mat[i][j],{i,j}});
            }
        }
        
        
        for(int i=0;i<arr.size();i++){
            auto p=mp[arr[i]];
            
            rw[p.first]++;
            cl[p.second]++;
            
            if(rw[p.first]==cl.size()){
               return i;
            }
            if(cl[p.second]==rw.size()){
               return i;
            }
        }
        
        
        return ans;
    }
};