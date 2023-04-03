class Solution {
public:
    
     int ans=0;
    
    void rec(int xora,vector<int>&nums,int ind){
        
        if(ind==nums.size()){
            ans+=xora;
            return ;
        }
        
       rec(xora^nums[ind],nums,ind+1);
       rec(xora,nums,ind+1);
    }
    
    int subsetXORSum(vector<int>& nums) {
        
       
        rec(0,nums,0);
        return ans;
       
    }
};