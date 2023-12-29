#define infy 100000;
int dp[301][11];
class Solution {
public:
    
    int dfs(int i,int n,vector<int>&jd,int d){
        if(i==n && d==0) return 0;
        if(i==n || d==0 || n-i<d) return infy;
        
        if(dp[i][d]!=-1) return dp[i][d];
        int maxi=-infy;
        int mini=infy;
        
        for(int j=i;j<n;j++){
            maxi=max(jd[j],maxi);
            mini=min(mini,maxi+dfs(j+1,n,jd,d-1));
        }
        
        dp[i][d]=mini;
        return dp[i][d];
    }
    
    int minDifficulty(vector<int>& jd, int d) {
        int sz=jd.size();
        memset(dp,-1,sizeof(dp));
        if(sz<d)return -1;
        return dfs(0,sz,jd,d);
    }
};