class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>mi(matrix.size(),INT_MAX);
        vector<int>mx(matrix[0].size(),INT_MIN);
        vector<int>ans;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                
                if(matrix[i][j]<mi[i])mi[i]=matrix[i][j];
                if(matrix[i][j]>mx[j])mx[j]=matrix[i][j];
                
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==mi[i] && matrix[i][j]==mx[j])ans.push_back(matrix[i][j]);
            }
        }
        
        return ans;
    }
};