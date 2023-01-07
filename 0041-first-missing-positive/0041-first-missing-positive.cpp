class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]>n || nums[i]<=0){
                nums[i]=n+1;
            }
        }
        
       for(int i=0;i<n;i++){
           int ind=abs(nums[i]);
           
           if(ind>n) continue;
           ind--;
           
           if(ind<=n && nums[ind]>0){
               nums[ind]=-(nums[ind]);
           }
       }
        
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        
        return n+1;
    }
};