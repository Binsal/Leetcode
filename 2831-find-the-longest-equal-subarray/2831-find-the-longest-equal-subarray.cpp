class Solution {
public:
    
    int longestEqualSubarray(vector<int>& nums, int k) {

        int ans=1;
        map<int,vector<int>>mp1;
     
        for(int i=0;i<nums.size();i++){
            mp1[nums[i]].push_back(i);
        }
        
        for(auto [key,vec]:mp1){
            
            int count=0;
            int i=0;
            int j=0;
            
            for(int i=1;i<vec.size();i++){
                
                count+=vec[i]-vec[i-1]-1;
                
                while(count>k){
                    count-=vec[j+1]-vec[j]-1;
                    j++;
                }
                   
                ans=max(ans,i-j+1);
            }
            
        }
        
        return ans;
    }
};