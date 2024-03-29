class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n=stoneValue.size();
        
        vector<int>dp(n+1,0);
        
        for(int i=n-1;i>=0;i--){
            
            int takeone=stoneValue[i]-dp[i+1];
            int taketwo=INT_MIN;
            int takethree=INT_MIN;
            
            if(i+1<n){
                taketwo=stoneValue[i]+stoneValue[i+1]-dp[i+2];
            }
            
            if(i+2<n){
                takethree=stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-dp[i+3];
            }
            
            dp[i]=max(takeone,max(taketwo,takethree));
            
        }
        
        
        if(dp[0]>0)return "Alice";
        if(dp[0]<0)return "Bob";
        
        
        return "Tie";
    }
};