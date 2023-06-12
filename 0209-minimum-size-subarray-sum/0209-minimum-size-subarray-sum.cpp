class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        
        if(find(nums.begin(),nums.end(),target)!=nums.end())return 1;
        
        int mini=nums.size();
        map<int,int>mp;
        
        int s=accumulate(nums.begin(),nums.end(),0);
        if(s<target)return 0;
        
        int sum=0;
        
         int sumo=0;
        
        for(int k=0;k<nums.size();k++){
            sumo+=nums[k];
            mp[k]=sumo;
        }
        
        while(j<nums.size()){
            
             sum+=nums[j];
        
            
            if(sum>=target)mini=min(mini,j-i+1);
            
            if(sum>=target){
                
                while(i<=j && sum>target){
                    sum=sum-nums[i];
                    mini=min(mini,j-i+1);
                    i++;
                }
                
                if(sum==target)mini=min(mini,j-i+1);
                
                 while(i<=j && sum>=target){
                    sum=sum-nums[i];
                    i++;
                }
            }
            
           
           
            
            j++;   
        }
        
        
        return mini;
    }
};