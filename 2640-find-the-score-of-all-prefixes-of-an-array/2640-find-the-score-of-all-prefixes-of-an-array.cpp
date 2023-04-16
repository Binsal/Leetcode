class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>vec(nums.size(),0);
        int maxi=nums[0];
        
        for(int i=0;i<nums.size();i++){
            
            maxi=max(maxi,nums[i]);
            if(i==0) vec[i]=maxi+nums[i];
            else{
                vec[i]=maxi+nums[i]+vec[i-1];
            }
            
            
        }
        
        return vec;
    }
};