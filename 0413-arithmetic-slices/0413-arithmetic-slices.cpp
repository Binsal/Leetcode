class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)return 0;
        
        int cnt=0;
        int ans=0;
        
        int pre_diff=nums[1]-nums[0];
        
        for(int i=1;i<nums.size()-1;i++){
            int diff=nums[i+1]-nums[i];
            
            if(diff==pre_diff)cnt++;
            else {
                pre_diff=diff;
                cnt=0;
            }
            
            ans+=cnt;
        }
        
        return ans;
    }
};