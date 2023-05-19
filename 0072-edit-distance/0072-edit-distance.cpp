class Solution {
public:
    
    
    int dp[501][501]; 
    int rec(int i,int j,string &text1,string &text2){
        
        if(i==0)return j;
        if(j==0)return i;
        
        if(dp[i][j]!=-1)  return dp[i][j];
        
        if(text1[i-1]==text2[j-1]){ 
            dp[i][j]= rec(i-1,j-1,text1,text2);
            return dp[i][j];
        }
        
        dp[i][j]=1+min(rec(i-1,j,text1,text2),min(rec(i-1,j-1,text1,text2),rec(i,j-1,text1,text2)));
        
        return dp[i][j];
    }
    
    int minDistance(string word1, string word2) {
        if(word1.size()==0 && word2.size()==0)return 0;
      int  n=word1.size();
        int m=word2.size();
        memset(dp,-1,sizeof(dp));
        int ans=rec(n,m,word1,word2);
        // int maxi=max(n,m);
        //return maxi-ans;
        return ans;
    }
};