class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count=0;
        
        long long mini=-1;
        long long maxi=-1;
        long long elin=-1;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]<minK || nums[i]>maxK){
                elin=i;
            }
            
            if(nums[i]==minK)mini=i;
            
            if(nums[i]==maxK)maxi=i;
            
            if(mini!=-1 && maxi!=-1)count+=max(0ll,min(mini,maxi)-elin);
            
        }
        
        return count;
    }
};