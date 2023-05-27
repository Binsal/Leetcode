class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        long long ans=1;
        
       sort(nums.begin(),nums.end());
       int cnt=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(ans*nums[i]>0 || (i<nums.size()-1 && nums[i+1]<0)){
                ans*=nums[i];
                cnt++;
            }
        
        }
        
//         while(ind !=-1 && ind<nums.size() && nums[ind]==0)ind++;
        
//         if(ind!=-1 && nums.size()-ind>1){
//             for(int i=ind;i<nums.size()-1;i+2){
//                 cout<<ans<<endl;
//                 ans=ans*nums[i]*nums[i+1];

//             }
//         }
        
        if(!cnt)return nums[nums.size()-1];
        return ans;
        
    }
};