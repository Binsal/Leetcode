class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums.size()==2){
            return min(nums[1],nums[0]);
        }
        
        int l=0;
        int h=nums.size()-1;
        
        while(l<=h){
            int m=(l+h)/2;
            
            if(m<nums.size()-1 && m>0 && nums[m]<nums[m+1] && nums[m]<nums[m-1])
            {
                return nums[m];
            }
            else if(nums[m+1]<nums[m]){
                return nums[m+1];
            }
            else{
                if(nums[h]<nums[m]){
                    l=m+1;
                }
                else {
                    h=m-1;
                }
            }
        }
        
        return nums[l];
    }
};