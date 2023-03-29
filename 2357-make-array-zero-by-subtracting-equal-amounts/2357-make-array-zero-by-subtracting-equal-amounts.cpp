class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops=0;
        if(nums.size()==1 && nums[0]==0)return 0;
        if(nums.size()==1)return 1;
        
        sort(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0)continue;
            ops++;
            
            for(int j=i+1;j<nums.size();j++){
                nums[j]-=nums[i];
            }
            
            nums[i]=0;
        }
        
        if(nums[nums.size()-1]!=0)ops++;
        
        return ops;
    }
}; 