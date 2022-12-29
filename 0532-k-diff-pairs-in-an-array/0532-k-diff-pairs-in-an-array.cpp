class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        sort(nums.begin(),nums.end());
        map<int,int>v;

        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(i>0 && nums[i-1]==nums[i]){
                    break;
                }
                if(nums[j]-nums[i]==k){
                   int first=min(nums[i],nums[j]);
                   int second=max(nums[i],nums[j]);
                   v.insert({first,second});
                }
                else{
                    if(nums[j]-nums[i]>k){
                        break;
                    }
                }
            }
        }

       return v.size(); 
    }
};