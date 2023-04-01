class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            
            
        }
        
        for(auto x:mp){
            if(x.second>floor(nums.size()/3.0)){
                v.push_back(x.first);
            }
        }
        
        return v ;
    }
};