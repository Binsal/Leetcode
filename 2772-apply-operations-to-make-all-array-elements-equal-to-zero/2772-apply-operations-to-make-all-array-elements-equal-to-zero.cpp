class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        
        vector<int>diff(nums.size()+1,0);
        int curr=0;
        
        for(int i=0;i<nums.size();i++){
            
            curr+=diff[i];
            if(curr>nums[i])return false;
            
            int d=nums[i]-curr;
            if(d==0)continue;
            
            if(i+k>nums.size())return false;
            
            curr+=d;
            diff[i+k]=-d;
            
        }
        
        return true;
    }
};