class Solution {
public:
    int longestSubsequence(vector<int>& nums, int difference) {
        int maxi=*max_element(nums.begin(),nums.end());
        
         map<int,int>dp;
        
//         for(auto x:nums){
//             dp[x]=1;
//         }
        
        int ans=0;
        
        
        //if(difference>=0){
            for(auto x:nums){
                    dp[x]=1+dp[x-difference];
                    ans=max(ans,dp[x]);
           }
            
       // }
//         else{
//             for(int i=maxi+1;i>=0;i--){
//                 if(i-difference<=maxi ){
//                     dp[i]=1+dp[i-difference];
//                     ans=max(ans,dp[i]);
//                 }
//             }
            
            
//         }
         
        return ans;
    }
};