class Solution {
public:
    
    long long rec(int i,vector<vector<int>>&questions,vector<long long>&dp){
        if(i>=questions.size())return 0;
        
        if(dp[i]!=0)return dp[i];
        
        return dp[i]=max(questions[i][0]+rec(i+questions[i][1]+1,questions,dp),rec(i+1,questions,dp));
    }
    
    
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long>dp(questions.size()+1,0);
    
        return rec(0,questions,dp);
    }
};