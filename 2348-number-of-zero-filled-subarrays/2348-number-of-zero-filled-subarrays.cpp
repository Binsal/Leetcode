class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        
       
        long long int j=0;
        
        while(j<nums.size()){
            
            if(nums[j]==0){
               long long  int i=j;
            
                while(j<nums.size() && nums[j]==0){
                    j++;
                }
                 ans+=((j-i)*(j-i+1))/2;
                
             }
        
            j++;
        
        }
        
        return ans;
    }
};