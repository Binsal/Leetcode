class Solution {
public:
    
    int dp[501][501]={};
    
    int rec(vector<int>&cost,vector<int>&time,int i,int remainingWalls){
         if(remainingWalls<=0)return 0;
        if(i>=time.size())return 1000000000;
       
        
        if(dp[i][remainingWalls]!=0)return dp[i][remainingWalls];
        
        int skip=rec(cost,time,i+1,remainingWalls);
        int pick = rec(cost,time,i+1,remainingWalls-time[i]-1)+cost[i];
        
        dp[i][remainingWalls]=min(skip,pick);
        
        return dp[i][remainingWalls];
    }
    
    int paintWalls(vector<int>& cost, vector<int>& time) {
        return rec(cost,time,0,time.size());
    }
};