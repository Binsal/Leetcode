class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int count=0;
        
        sort(nums.begin(),nums.end());
        
        int j=1;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=-1){
                while(j<nums.size()){
                    if(nums[j]>nums[i]){
                        cout<<nums[i]<<" "<<nums[j]<<endl;
                        nums[i]=-1;
                       // nums[j]=-1;
                        count++;
                        j++;
                        break;
                    }
                    j++;
                }
            }
        }
        return count;
    }
};