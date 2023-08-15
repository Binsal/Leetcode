class Solution {
public:
    int mod=1e9+7;
    
    int rec(vector<int>&locations,int start,int finish,int fuel,vector<vector<int>>&dp){
        if(fuel<0)return 0;
        
        if(dp[start][fuel]!=-1)return dp[start][fuel];
        
        int ans=0;
        
        if(start==finish)ans++;
        
        for(int i=0;i<locations.size();i++){
            
            if(start==i || abs(locations[start]-locations[i])>fuel)continue;
            
            ans+=(rec(locations,i,finish,fuel-(abs(locations[start]-locations[i])),dp))%mod;
            ans%=mod;
        }
        
        return dp[start][fuel]=ans%mod;
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        vector<vector<int>>dp(locations.size(),vector<int>(201,-1));
        
        return rec(locations,start,finish,fuel,dp);
    }
};