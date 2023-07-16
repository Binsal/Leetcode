class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>>v(grid.size(),vector<int>(grid[0].size(),0 ));
        
        vector<int>row(grid.size(),0);
        vector<int>col(grid[0].size(),0);
        
        
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[0].size();j++){
                
                if(grid[i][j]==1){
                    row[i]++;
                    col[j]++;
                    
                }
            }
            
        }
        
        int cols=grid[0].size();
        int rows=grid.size();
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                v[i][j]=row[i]+col[j]-(cols-row[i])-(rows-col[j]);
            }
        }
        
        return v;
    }
};