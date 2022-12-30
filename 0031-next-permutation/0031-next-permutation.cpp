class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//        int ind=-1;
//         if(nums.size()==1)return;
        
//         for(int i=nums.size()-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 swap(nums[i],nums[nums.size()-1]);
//                 ind=i;
//                 break;
//             }
//         }
               
//         if(ind==0){
//         reverse(nums.begin(),nums.end());
//         }
//         else{
//             int ind2=0;
//             for(int i=nums.size()-1;i>=0;i--){
//                 if(nums[i]>nums[ind]){
//                     ind=i;
//                 }
//             }
            
//             swap(nums[ind],nums[ind2]);
//             sort(nums.begin()+ind,nums.end());
//         }
        
        next_permutation(nums.begin(),nums.end());
    }
};