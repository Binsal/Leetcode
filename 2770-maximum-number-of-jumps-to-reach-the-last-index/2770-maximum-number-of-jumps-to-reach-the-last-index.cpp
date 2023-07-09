class Solution {
public:
    
   int dp[1002];
    int rec(vector<int>&nums,int target,int i){
        if(i==nums.size()-1){
            return 0;
        }
        if(i>=nums.size())return -1e9;
         
        if(dp[i]!=-1) return dp[i];
        int count=INT_MIN;
        
        for(int j=i+1;j<nums.size();j++){
            
            if(abs(nums[j]-nums[i])<=target){
               count=max(count,1+rec(nums,target,j));
            }
            
             
        }
        
        return dp[i]= count;
    }
    
    int maximumJumps(vector<int>& nums, int target) {
       memset(dp,-1,sizeof(dp));
        int ans=rec(nums,target,0);
        if(ans<=-1e9) return -1;
        
        return ans;
    }
};