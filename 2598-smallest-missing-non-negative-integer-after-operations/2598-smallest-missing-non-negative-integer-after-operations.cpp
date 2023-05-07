class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        
       
        vector<int>freq(value,0);
      
        for(int i=0;i<nums.size();i++){
             int mod=nums[i]%value;
            if(mod<0)mod+=value;
            
            freq[mod]++;
        }
        
      
        for(int i=0;i<nums.size();i++){
            
            if(freq[i%value]>0){
                freq[i%value]--;
            }
            
            else return i;
        }
        
        return nums.size();
    }
};