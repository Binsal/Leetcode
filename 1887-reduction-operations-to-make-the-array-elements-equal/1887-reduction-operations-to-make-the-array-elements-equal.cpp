class Solution {
public:
    
    int reductionOperations(vector<int>& nums) {
        int ops=0;
        
//         map<int,int>mp;
        
//         for(int i=0;i<nums.size();i++){
        
//                 mp[nums[i]]++;
            
//         }
        
//        for(int i=0;i<mp.size();i++){
//            if(i==0)ops++;
//            ops+=mp[i].second();
//        }
        
        
        sort(nums.begin(),nums.end());
        int fst=0;
        
        for(int i=0;i<nums.size();i++){
            if(i==0){
                fst=nums[0];
                
            }
            else if(nums[i]==fst)continue;
            else if(nums[i]==nums[i-1])continue;
            else{
                ops+=nums.size()-i;
            }
        }
        
       // if(ops!=0)ops++;
        return ops;
    }
};