class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix.size()-1;
        
        if(matrix.size()==1 || matrix[0].size()==1){
            if(matrix.size()==1){
                for(int i=0;i<matrix[0].size();i++){
                    if(matrix[0][i]==target)return true;
                }
                
                return false;
            }
            else{
                for(int i=0;i<matrix.size();i++){
                    if(matrix[i][0]==target)return true;
                }
                
                return false;
            }
        }
        
        if(low==0 && high==0){
            if(matrix[0][0]==target)return true;
            return false;
        }
        int rows=matrix.size()-1;
        int cols=matrix[0].size()-1;
        
        
        if(matrix[rows][cols]<target)return false;
        if(matrix[0][0]>target)return false;
        
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            if(matrix[mid][0]<=target && matrix[mid][cols]>=target) {
                for(int i=0;i<=cols;i++){
                    if(matrix[mid][i]==target)return true;
                }
                
                return false;
            }
            
            else if(matrix[mid][0]>target){
                
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        
        
        return false;
    }
};