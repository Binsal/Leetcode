class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long ans=nums[nums.size()-1];
        long long maxi=0;
        
        for(int i=nums.size()-2;i>=0;i--){
            
            if(nums[i]<=ans){
                ans+=nums[i];
            }
            else{
                maxi=max(maxi,ans);
                ans=nums[i];
            }
            
        }
        
        return ans;
    }
};