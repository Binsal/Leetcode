class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>v(r,vector<int>(c,0));
        
        int orow=mat.size();
        int ocol=mat[0].size();
        
        if(orow*ocol!=r*c)return mat;
        
        
        int k=0;
        int l=0;
        
        for(int i=0;i<orow;i++){
            for(int j=0;j<ocol;j++){
                
                v[k][l++]=mat[i][j];
                
                if(l==c){
                    k++;
                    l=0;
                }
            }
        }
        
        return v;
    }
};