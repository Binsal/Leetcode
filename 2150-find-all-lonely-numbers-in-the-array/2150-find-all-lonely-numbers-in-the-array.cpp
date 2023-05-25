class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>v;
        
        sort(nums.begin(),nums.end());
        
        if(nums.size()==1)return nums;
        
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[i+1]==nums[i])continue;
                else if(nums[i+1]!=nums[0]+1)v.push_back(nums[i]);
            }
            
            
            else if(i==nums.size()-1){
                if(nums[i-1]==nums[i])continue;
                else if(nums[i-1]!=nums[i]-1 )v.push_back(nums[i]);
            }
            else if(nums[i-1]==nums[i] || nums[i+1]==nums[i])continue;
            else if((nums[i-1]!=nums[i]-1) && (nums[i+1]!=nums[i]+1))v.push_back(nums[i]);
        }
        
        return v;
    }
};