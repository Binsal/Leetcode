class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int result=0;
        
        unordered_map<long,int>mp[nums.size()];
        
        for(int i=0;i<nums.size();i++){
            
            for(int j=0;j<i;j++){
                
                long diff=(long)nums[i]-nums[j];
                auto it=mp[j].find(diff);
                
                int count= it==end(mp[j])?0:it->second;
                
                mp[i][diff]+=count+1;
                result+=count;
                
            }
            
        }
        
        
        
        return result;
    }
};