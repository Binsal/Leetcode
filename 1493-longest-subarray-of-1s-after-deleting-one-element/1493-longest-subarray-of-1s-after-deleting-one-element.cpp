class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=0;
        int i=0;
        int j=0;
        
        int n=nums.size();
        int count=0;
        
        while(j<n){
            
            if(nums[j]==0)count++;
            if(count<=1){
                maxi=max(maxi,j-i);
            }
            else{
                while(i<j && count>1){
                    if(nums[i]==0)count--;
                    i++;
                }
            }
            
            j++;
        }
        
        return maxi;
    }
};