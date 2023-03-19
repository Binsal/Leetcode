class Solution {
public:
    
     
    
      void dfs(vector<vector<int>>& grid, int i, int j,vector<pair<int,int>>&v) { // for marking the 1st island visited
        
        if (i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j] == 2 or grid[i][j] == 0)
            return;
        
        grid[i][j] = 2; // marking them visited
         v.push_back({i,j});
        dfs(grid, i+1, j,v);
        dfs(grid, i-1, j,v);
        dfs(grid, i, j+1,v);
        dfs(grid, i, j-1,v);
    }
    
   
    int shortestBridge(vector<vector<int>>& grid) {
        int count=INT_MAX;
        bool flag=false;
       
        vector<pair<int,int>>v1;
        vector<pair<int,int>>v2;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                   if(grid[i][j]==1){
                       
                       if(!flag){
                        dfs(grid,i,j,v1);
                        flag=true;
                       }
                       else {
                             dfs(grid,i,j,v2);
                       }
                   }
             
            }
            
        }
        
        for(auto x:v1){
            for(auto y:v2){
                count=min(count,abs(x.first-y.first)+abs(x.second-y.second));
            }
        }
        return count-1;
    }
};