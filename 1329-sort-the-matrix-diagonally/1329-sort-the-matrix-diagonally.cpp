// class Solution {
// public:
//     vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
//        // vector<vector<int>>ans;
        
//         for(int diff=0;diff<mat.size();diff++){
//             vector<int>v;
//             for(int i=0,j=diff;j<mat[0].size() && i<mat.size();i++,j++){
//                 v.push_back(mat[i][j]);
//             }
            
            
//             sort(v.begin(),v.end());
            
//             for(int i=0,j=diff;j<mat[0].size() && i<mat.size();i++,j++){
//                 mat[j][i]=v[i];
//             }
        
//         }
        
//          for(int diff=1;diff<mat[0].size();diff++){
//             vector<int>v;
//             for(int i=0,j=diff;j<mat[0].size() && i<mat.size();i++,j++){
//                 v.push_back(mat[i][j]);
//             }
            
            
//             sort(v.begin(),v.end());
            
//             for(int i=0,j=diff;j<mat[0].size() && i<mat.size();i++,j++){
//                 mat[i][]=v[i];
//             }
//         }
    
//        return mat;
//     }
// };

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> k;
        int m = mat.size() , n = mat[0].size();
        for (int r=0; r<m; r++)        // r-> row
        {
            k.clear();
            for (int j=0,i=r; j<n && i<m ; j++,i++) k.push_back(mat[i][j]);    // add to vector
            sort(k.begin(),k.end());
            for (int j=0,i=r; j<n && i<m ; j++,i++) mat[i][j]=k[j];            // replace
        }
        for (int c=1; c<n; c++)       // c->column
        {
            k.clear();
            for (int i=0, j=c; j<n && i<m; i++, j++) k.push_back(mat[i][j]);   // add to vector
            sort(k.begin(),k.end());
            for (int i=0, j=c; j<n && i<m; i++, j++) mat[i][j] = k[i];         //replace
        }
        return mat;
    }
};