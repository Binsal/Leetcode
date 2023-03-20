class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
       int ind=0;
        unordered_map<int,int>mp;
        
        int count=0;
      
          int diff=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k){
                ind=i;
                break;
            }
        }
        
        mp[0]++;
        
        for(int i=ind+1;i<nums.size();i++){
            if(nums[i]>k){
               diff++;
            }
            else {
                diff--;
            }
           
            mp[diff]++;
        }
        
        diff=0;
        count+=mp[0-diff];
        count+=mp[1-diff];
       
        for(int i=ind-1;i>=0;i--){
            
            if(nums[i]>k){
               diff++;
            }
            else{
                diff--;
            }
           
            count+=mp[0-diff];
            count+=mp[1-diff];
        }
        return count;
    }
};