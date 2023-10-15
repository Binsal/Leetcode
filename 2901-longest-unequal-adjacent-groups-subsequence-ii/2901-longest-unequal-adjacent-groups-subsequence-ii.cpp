class Solution {
public:
    
    int hamDist(string &word1,string &word2){
        int dist=0;
        
        for(int i=0;i<word1.size();i++){
            
            if(word1[i]!=word2[i])dist++;
            if(dist>1)break;
            
        }
        
        return dist;
    }
    
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<vector<string>>dp(n);
        
        for(int i=0;i<n;i++){
            dp[i].push_back(words[i]);
        }
        
        int max_length=1;
        
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                
                if(groups[i]!=groups[j] && words[i].size()==words[j].size()){
                    
                    int dist=hamDist(words[i],words[j]);
                    
                    
                    if(dist==1){
                        
                        if(dp[j].size()+1>dp[i].size()){
                            
                            dp[i]=dp[j];
                            dp[i].push_back(words[i]);
                            max_length=max(max_length,int(dp[i].size()));
                        }
                        
                    }
                    
                }
                
            }
        }
        
        vector<string>subseq;
        
        for(int i=0;i<n;i++){
            if(dp[i].size()==max_length){
                subseq=dp[i];
                break;
            }
        }
        
        return subseq;
        
    }
};