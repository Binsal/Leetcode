class Solution {
public:
   
    
    int rec(string &word1,string &word2,int i,int j,vector<vector<int>>&dp){
        
        if(i==word1.size()|| j==word2.size())return 0;
        
        int count=0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(word1[i]==word2[j]){
            count=1+rec(word1,word2,i+1,j+1,dp);
        }
       
        count=max(count,rec(word1,word2,i,j+1,dp));
        count=max(count,rec(word1,word2,i+1,j,dp));
        
        dp[i][j]=count;
        return count;
    }
        
    int minDistance(string word1, string word2) {
       
        vector<vector<int>>dp(501,vector<int>(501,-1));
        int count=rec(word1,word2,0,0,dp);
       
        int ans=0;
        
        ans+=word1.size()-count;
        ans+=word2.size()-count;
        
        return ans;
    }
};