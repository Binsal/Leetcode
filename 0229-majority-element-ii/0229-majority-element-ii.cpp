class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        int y(-1),z(-1),cy(0),cz(0);
        
        
            for(auto x:nums){
                if(x==y)cy++;
                else if(x==z)cz++;
                else if(!cy){y=x;cy=1;}
                else if(!cz){z=x;cz=1;}
                else {cy--;cz--;}
            }
      
        
        cy=cz=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==y)cy++;
            else if(nums[i]==z)cz++;
        }
        
        
        if(cy>nums.size()/3)v.push_back(y);
        if(cz>nums.size()/3)v.push_back(z);
        
        return v ;
    }
};