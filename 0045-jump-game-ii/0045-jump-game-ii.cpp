class Solution {
public:
    int jump(vector<int>& nums) {
       if(nums.size()<=1) return 0;
       int count=0;
       int i=0;
       int max_reach=nums[i];
       int reach=nums[i];
        while(max_reach<nums.size()-1){
            
            if(reach<nums[i]+i){
                reach=nums[i]+i;
            }
            
            if(i==max_reach){
                count++;
                max_reach=reach;
            }
            
          
            i++;
        }
       return count+1;
    }
};