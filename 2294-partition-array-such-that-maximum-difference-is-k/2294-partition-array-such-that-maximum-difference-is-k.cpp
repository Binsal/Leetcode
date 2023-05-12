class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int count=1;
        int j=0;
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]-nums[j]<=k){
                continue;
            }
            else{
                j=i;
                count++;
            }
        }
        
        return count;
    }
};