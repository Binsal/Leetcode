class Solution {
public:
    
    int recm(vector<int>&nums){
      
        
        int maxi=INT_MIN;
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum<0)sum=0;
            maxi=max(maxi,sum);
            
          
            
        }
        
        return maxi;
        
    }
    
     int recmi(vector<int>&nums){
        
        int mini=INT_MAX;
        int sum=0;
         
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>0)sum=0;
            mini=min(mini,sum);
        }
        
        return mini;
        
    }
    
    
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi=recm(nums);
        int mini=recmi(nums);
        
        return abs(maxi)<abs(mini)?abs(mini):abs(maxi);
    }
};