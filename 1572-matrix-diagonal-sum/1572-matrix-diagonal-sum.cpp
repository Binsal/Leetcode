class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        vector<vector<bool>>visted(mat.size(),vector<bool>(mat.size(),0));
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    cout<<mat[i][j]<<endl;
                    sum+=mat[i][j];
                    visted[i][j]=1;
                }
            }
        }
        
        for(int i=0;i<mat.size();i++){
            for(int j=mat.size()-1;j>=0;j--){
                if(((mat.size()-1)-j)==i && !visted[i][j]){
                    cout<<mat[i][j]<<endl;
                    sum+=mat[i][j];
                    visted[i][j]=1;
                } 
            }
        }
        
        
        return sum;
    }
};