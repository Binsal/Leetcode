class Solution {
public:
    
    int rec(int ind,int buy,vector<int>&prices,vector<vector<int>>&dp){
        if(ind>=prices.size())return 0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        
        if(buy){
            dp[ind][buy]= max(-prices[ind]+rec(ind+1,0,prices,dp),0+rec(ind+1,1,prices,dp));
            return dp[ind][buy];
        }
        
        dp[ind][buy] =max(prices[ind]+rec(ind+2,1,prices,dp),0+rec(ind+1,0,prices,dp));
        
        return dp[ind][buy];
    }
    
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(5001,vector<int>(3,-1));
       return rec(0,1,prices,dp);
    }
};