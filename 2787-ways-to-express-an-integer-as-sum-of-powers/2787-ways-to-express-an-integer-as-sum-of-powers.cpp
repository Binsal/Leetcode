class Solution {
public:
    int mod=1e9+7;
    int ways=0;
    
   int rec(int n,int x,int num,int sum,vector<vector<int>>&dp){
        
        if(sum<0)return 0;
        
       if(sum==0){
           return 1;
       }
       
       if(sum<pow(num,x))return 0;
       
       if(dp[num][sum]!=-1)return dp[num][sum];
     
      int pick=(rec(n,x,num+1,sum-pow(num,x),dp))%mod;
       int skip=(rec(n,x,num+1,sum,dp))%mod;
      
       return dp[num][sum]=(pick%mod+skip%mod)%mod;
    }
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(301,vector<int>(301,-1));
        return rec(n,x,1,n,dp);
    }
};