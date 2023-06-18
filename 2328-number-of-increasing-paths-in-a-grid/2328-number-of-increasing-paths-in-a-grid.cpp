class Solution {
public:
    int count=0;
    int mod=1000000007;
    
   int dfs(vector<vector<int>>&grid,int i,int j,int prev,vector<vector<int>>&dp){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())return 0;
        if(grid[i][j]<=prev)return 0;
     
        if(dp[i][j]!=-1)return dp[i][j];
       
        
        dp[i][j]= (1+dfs(grid,i+1,j,grid[i][j],dp) + dfs(grid,i-1,j,grid[i][j],dp)+ dfs(grid,i,j+1,grid[i][j],dp)+
        dfs(grid,i,j-1,grid[i][j],dp))%mod;
       
       return dp[i][j]%mod;
        
    }
    
    int countPaths(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                 dp[i][j]=dfs(grid,i,j,0,dp);  
                count+=dp[i][j];
                count%=mod;
       
            }
        }
          
        return count%mod;
    }
    
    
    
};