class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0;
        long long ans=0;
        int i=0;
        int j=0;
        
        map<int,int>mp;
        set<int>st;
        
        while(j<nums.size()){
            
            mp[nums[j]]++;
            st.insert(nums[j]);
            sum+=nums[j];
            
            if(j-i+1==k){
                if(st.size()==k){
                    ans=max(ans,sum);
                  //  cout<<i<<" "<<j<<endl;
                }

                 mp[nums[i]]--;
                 if(mp[nums[i]]==0)st.erase(nums[i]);
                   
                 sum-=nums[i];
                 i++;
                
            }
            
            j++;
        }
        
        
        return ans;
    }
};