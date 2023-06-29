class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int mod=1e9+7;
        long long ans=1;
        
        int index=-1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(index==-1){
                    index=i;
                }
                else{
                    ans=(ans%mod*(i-index)%mod)%mod;
                    index=i;
                }
            }
        }
        
        if(index==-1)return 0;
        return (int)ans;
    }
};