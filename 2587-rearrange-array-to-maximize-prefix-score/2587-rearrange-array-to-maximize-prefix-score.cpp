class Solution {
public:
    int maxScore(vector<int>& nums) {
     
        
        int count=0;
        
        sort(nums.begin(),nums.end(),greater<int>());
        
        if(nums[0]>0)count++;
        long long sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];    
           if(sum>0)count++;
        }
        
        return count;
    }
};