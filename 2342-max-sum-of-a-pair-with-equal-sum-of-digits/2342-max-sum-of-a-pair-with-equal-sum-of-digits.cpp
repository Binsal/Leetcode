class Solution {
public:
    
    int digit_sum(int num){
        
        int sum=0;
        
        while(num){
            sum+=num%10;
            num=num/10;
        }
        
        return sum;
        
    }
    
    int maximumSum(vector<int>& nums) {
        int maxi=-1;
        
        map<int,vector<int>>mp;
        
        for(int i=0;i<nums.size();i++){
            int sum=digit_sum(nums[i]);
            mp[sum].push_back(nums[i]);
        }
        
        for(auto vec:mp){
            if(vec.second.size()==1)continue;
            else{
                sort(vec.second.begin(),vec.second.end(),greater<>());
                maxi=max(maxi,vec.second[0]+vec.second[1]);
            }
        }
        
        
        return maxi;
    }
};