class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int moves=0;
        
        sort(nums.begin(),nums.end());
        int val=nums[0];
            
        for(int i=1;i<nums.size();i++){
            if(nums[i]==val){
                moves+=1;
                nums[i]++;
            }
            else if(nums[i]<val){
                moves+=val-nums[i]+1;
                nums[i]+=val-nums[i]+1;
            }
            val=nums[i];
        }
        
        return moves;
    }
};