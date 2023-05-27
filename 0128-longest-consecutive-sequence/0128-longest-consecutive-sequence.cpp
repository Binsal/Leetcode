class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        
        int maxi=0;
        
        unordered_set<int>mp(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            
            if(mp.find(nums[i]-1)!=mp.end())continue;
             int ans=1;
             int j=1;
            
             while(mp.find(nums[i]+j)!=mp.end()){
                     mp.count(nums[i]+j);
                     ans++;
                     j++;
             }
            
            maxi=max(ans,maxi);
            
        }
        
        return maxi;
    }
};