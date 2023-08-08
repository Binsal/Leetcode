class Solution {
public:
    
    
    int rec(vector<bool>col,vector<bool>diag,vector<bool>anti_diag,int row){
        int n=col.size();
        if(row==n)return 1;
        
        int count=0;
        
        for(int column=0;column<n;column++){
            
            if(!col[column] && !diag[row+column] && !anti_diag[row-column+n-1]){
                col[column]=diag[row+column]=anti_diag[row-column+n-1]=1;
                
                count+=rec(col,diag,anti_diag,row+1);
                col[column]=diag[row+column]=anti_diag[row-column+n-1]=0;
                
                
            }
            
        }
        
        return count;
    }
    
    
    int totalNQueens(int n) {
        vector<bool>col(n),diag(2*n),anti_diag(2*n);
        return rec(col,diag,anti_diag,0);
    }
    
};