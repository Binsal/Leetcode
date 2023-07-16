class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n,0));
        
        int i=0,j=0,l=0,r=n-1,t=0,b=n-1;
        int tt=n*n;
        int val=1;
        
        while(tt--){
            
            v[i][j]=val;
            val++;
            
            if(i==t && j<r){j++; if(j==r)t++;}
            else if(j==r && i<b){i++; if(i==b)r--;}
            else if(i==b && j>l){j--; if(j==l)b--;}
            else if(j==l && i>t){i--; if(i==t)l++;}
            
        }
        
        return v;
    }
};