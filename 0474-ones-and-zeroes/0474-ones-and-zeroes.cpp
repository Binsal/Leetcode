class Solution {
public:
    
    int counto(string str){
        int count=0;
        
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                count++;
            }
        }
        return count;
    }
    
    int countz(string str){
        int count=0;
        
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                count++;
            }
        }
        return count;
    }
    
    int dp[605][105][105]={};
    
    int rec(vector<string>&strs,int m,int n,int i,int curr_ones,int curr_zeroes){
        
        if(dp[i][curr_ones][curr_zeroes]!=-1){
            return dp[i][curr_ones][curr_zeroes];
        }
        if(i==strs.size() || (curr_ones==0 && curr_zeroes<=0)){
            return 0;
        }
        
        int ones=counto(strs[i]);
        int zeroes=countz(strs[i]);
        
        if(ones>curr_ones || zeroes>curr_zeroes){
            return rec(strs,m,n,i+1,curr_ones,curr_zeroes);
        }
        
        int take=1+rec(strs,m,n,i+1,curr_ones-ones,curr_zeroes-zeroes);
        int nottake=rec(strs,m,n,i+1,curr_ones,curr_zeroes);
        
        int maxi=max(take,nottake);
        dp[i][curr_ones][curr_zeroes]=maxi;
        return maxi;
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        int curr_ones=n;
        int curr_zeroes=m;
        int i=0;
        int ans=rec(strs,m,n,i,curr_ones,curr_zeroes);
        return ans;
    }
};