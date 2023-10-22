class Solution {
public:
    vector<int> gMinLeft(vector<int> nums){
        int lMin = nums[0];
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            nums[i] = lMin;
            lMin = min(lMin, x);
        }
        return nums;
    }
    
    vector<int> gMinRight(vector<int> nums){
        int rMin = nums[nums.size() - 1];
        for(int i = nums.size() - 1; i >= 0; i--){
            int x = nums[i];
            nums[i] = rMin;
            rMin = min(x, rMin);
        }
        return nums;
    }
    
    int minimumSum(vector<int>& nums) {
        vector<int> minLeft = gMinLeft(nums);
        vector<int> minRight = gMinRight(nums);
        
        int ans = INT_MAX;
        
        for(int i = 1; i < nums.size() - 1; i++){
            
            //cout << minLeft[i] << ":" << nums[i] << ":" << minRight[i] << endl;
            if(minLeft[i] >= nums[i] || minRight[i] >= nums[i]){
                continue;
            }
            ans = min(ans, nums[i] + minRight[i] + minLeft[i]);
        }
        
        return ans == INT_MAX ? -1 : ans;
    }
};