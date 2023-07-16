class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int len=nums.size();
        
        for(int i=0;i<nums.size();i++){
            int divi=i+1;
            int rem=len%divi;
            
            if(rem==0){
               
                int ans=nums[i]*nums[i];
               
                sum+=ans;
            }
        }
        
        return sum;
    }
};