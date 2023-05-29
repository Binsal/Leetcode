class Solution {
public:
  bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return true;
        vector<int> prefix(n,false);
        vector<int> suffix(n,false);
        prefix[0] = true;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>=nums[i-1] and prefix[i-1])prefix[i] = true;
        }
        
        suffix[n-1] = true;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<=nums[i+1] and suffix[i+1])suffix[i] = true;
        }
        
        if(prefix[n-2] or suffix[1])return true;
        for(int i=1;i<n-1;i++)
        {
            if(prefix[i-1] and suffix[i+1] and nums[i-1]<=nums[i+1])return true;
        }
        return false;
    }
};