class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int moves=0;
        
        sort(nums.begin(),nums.end());
        
       int sz=nums.size();
        
        if(sz%2==0)sz--;
        
        sz=nums[sz/2];
        
        for(auto x:nums)moves+=abs(sz-x);
        
        return moves;
    }
};