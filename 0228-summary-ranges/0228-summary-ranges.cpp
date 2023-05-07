class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>v;
        
        int i=0;
        
        
        while(i<nums.size()){
            string str="";
            
            str+=to_string(nums[i]);
            int ind=i;
            
            while(i+1<nums.size() && nums[i]+1==nums[i+1]){
                i++;
            }
            
            if(ind!=i){
                str+="->";
                str+=to_string(nums[i]);
            }
            v.push_back(str);
            i++;
            
        }
        
        return v;
    }
};