class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>l(nums.size(),0);
        vector<int>r(nums.size(),0);
        vector<int>v(nums.size(),0);
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++){  
            l[i]=sum;
            sum+=nums[i];
        }
        
        sum=0;
        
        for(int i=nums.size()-1;i>=0;i--){
            r[i]=sum;
            sum+=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            v[i]=abs(l[i]-r[i]);
        }
        
        return v;
    }
};