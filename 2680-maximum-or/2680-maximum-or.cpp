class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        
        long long ans;
        
        vector<int>suffix(nums.size()+1,0);
        vector<int>prefix(nums.size()+1,0);
        
        long long p=1;
       p= p<<k;
        
        ans=0;
        long long maxi=0;
        
        for(int i=0;i<nums.size()-1;i++){
            prefix[i+1]=prefix[i]|nums[i];
        }
        
        ans=0;
        
       // suffix[nums.size()-1]=nums[nums.size()-1];
        
        for(int i=nums.size()-1;i>=0;i--){
            suffix[i]=suffix[i+1]|nums[i];
        }
        
        
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,prefix[i]|suffix[i+1]|nums[i]*p);
        }
        return maxi;
        
    }
};