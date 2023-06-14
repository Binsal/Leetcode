class Solution {
public:
    
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector<int>dp(nums.size()+2,0);
        
        for(int i=nums.size()-1;i>=1;i--){
            dp[i]=max(nums[i]+dp[i+2],dp[i+1]);
        }
        
        int maxi=dp[1];
        
        vector<int>dp2(nums.size()+2,0);
        
         for(int i=nums.size()-2;i>=0;i--){
            dp2[i]=max(nums[i]+dp2[i+2],dp2[i+1]);
        }
        
        return max(dp[1],dp2[0]);
    }
};