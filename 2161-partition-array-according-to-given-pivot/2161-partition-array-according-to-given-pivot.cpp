class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                v1.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                v1.push_back(nums[i]);
            }
        }
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                v1.push_back(nums[i]);
            }
        }
                
        return v1;
    }
};