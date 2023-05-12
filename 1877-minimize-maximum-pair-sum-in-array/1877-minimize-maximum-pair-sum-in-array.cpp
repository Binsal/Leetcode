class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        
        for(int i=0;i<nums.size()/2;i++){
            maxi=max(maxi,nums[i]+nums[nums.size()-1-i]);
        }
        
       // return nums[nums.size()/2]+nums[(nums.size()-1)/2];
        return maxi;
    }
};