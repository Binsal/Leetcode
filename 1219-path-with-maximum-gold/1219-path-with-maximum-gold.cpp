class Solution {
public:
    
    int rec(vector<vector<int>>&grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==-1)return 0;
        
        if(grid[i][j]==0)return -10000;
        
        int ans=grid[i][j];
        grid[i][j]=-1;
            int maxi=0;
        maxi=max(maxi,rec(grid,i+1,j));
        maxi=max(maxi,rec(grid,i-1,j));
        maxi=max(rec(grid,i,j+1),maxi);
        maxi=max(maxi,rec(grid,i,j-1));
        
        grid[i][j]=ans;
        return maxi+ans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxi=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=-1) maxi=max(maxi,rec(grid,i,j));
            }
        }
        
        return maxi;
        
    }
};