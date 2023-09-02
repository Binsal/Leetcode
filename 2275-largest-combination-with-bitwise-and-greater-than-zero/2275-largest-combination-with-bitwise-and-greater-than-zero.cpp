class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int res=0;
        int maxi=*max_element(candidates.begin(),candidates.end());
        
        for(int i=1;i<=maxi;i<<=1){
            
            int count=0;
            
            for(auto ele:candidates){
                
                count+=(ele&i)>0;
            }
            
            
            
            res=max(res,count);
        }
        
        return res;
    }
};