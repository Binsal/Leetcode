class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int ind=-1;
        if(nums.size()==1)return;
        
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
               
        if(ind==-1){
        reverse(nums.begin(),nums.end());
        }
        else{
            int ind2=0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[ind]){
                    ind2=i;
                    break;
                }
            }
            
            swap(nums[ind],nums[ind2]);
            sort(nums.begin()+ind+1,nums.end());
        }
        
        //next_permutation(nums.begin(),nums.end());
    }
};