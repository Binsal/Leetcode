class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        long long ops=0;
        
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        
        vector<int>odd_nums;
        vector<int>even_nums;
        
        vector<int>odd_target;
        vector<int>even_target;
        
        for(auto x:nums){
            if(x%2==0){
                even_nums.push_back(x);
            }
            else{
                odd_nums.push_back(x);
            }
        }
        
        for(auto x:target){
             if(x%2==0){
                even_target.push_back(x);
            }
            else{
                odd_target.push_back(x);
            }
        }
        
        for(int i=0;i<odd_target.size();i++){
            ops+=abs(odd_nums[i]-odd_target[i])/2;
        }
        
         
        for(int i=0;i<even_target.size();i++){
            ops+=abs(even_nums[i]-even_target[i])/2;
        }
        
        
        return ops/2;
    }
};