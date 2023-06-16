class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k){
                count+=1;
            }
           
            count+=m[sum-k];
            
            m[sum]++;
        }

        return count;
    }
    
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        int ans=0;
        
        // vector<vector<int>>v(rows,vector<int>(cols,0));
        
        for(int i=0;i<rows;i++){
            
            vector<int>v(cols,0);
            
            for(int j=i;j<rows;j++){
                for(int k=0;k<cols;k++){
                    v[k]+=matrix[j][k];
                }
                
                 ans+=subarraySum(v,target);
                
         
                  
            }
            
        }
            
            
            
        return ans;
    }
};