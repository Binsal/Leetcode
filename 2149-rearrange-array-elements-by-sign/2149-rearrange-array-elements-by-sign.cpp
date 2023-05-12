class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        
        int i=0;
        int j=1;
        
        for(int k=0;k<nums.size();k++){
            if(nums[k]>=0){
                v[i]=nums[k];
                //cout<<v[i]<<endl;
                i+=2;
            }
            else{
                v[j]=nums[k];
                //cout<<v[j]<<endl;
                j+=2;
            }
            
        }
        
        return v;
    }
};