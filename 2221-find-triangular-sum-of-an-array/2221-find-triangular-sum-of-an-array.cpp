class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int sum=0;
        
//         for(int j=0;j<nums.size();j++){
//             for(int i=0;i<nums.size()-1-j;i++){
//                 nums[i]=(nums[i]+nums[i+1])%10;
//                 cout<<nums[i]<<" ";
//             }
//             cout<<endl;
//         }
        
//          int mini=-1;
        
        
        int n=nums.size();
        for(int i=n-1;i>=1;i--){
            for(int j=0;j<i;j++){
                nums[j]=(nums[j]+nums[j+1])%10;                
            }
        }
        return nums[0];
        //return nums[0]%10;
    }
};