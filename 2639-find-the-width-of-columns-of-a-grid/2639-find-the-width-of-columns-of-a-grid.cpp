class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int>ans(grid[0].size(),0);
        
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[i].size();j++){
                
               string str=to_string(grid[i][j]);
                
                if(ans[j]<str.size()){
                    ans[j]=str.size();
                }
                
            }
            
        }
        
        return ans;
    }
};