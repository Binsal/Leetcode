class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        
        int low=m;
        int high=5000*m;
        int ans=-1;
        
        while(low<=high){
            
            int mid=high-(high-low)/2;
            
            if(count(mat,mid,0,0,m,n,k)>=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        
        
        return ans;
    }
    
    int count(vector<vector<int>>&mat,int targetsum,int i,int sum,int m,int n,int k){
        
         if(sum>targetsum)return 0;
        if(i==m)return 1;
       
        
        int ans=0;
        
        for(int col=0;col<n;col++){
            
           int cnt= count(mat,targetsum,i+1,sum+mat[i][col],m,n,k-ans);
            
            if(cnt==0)break;
            
            ans+=cnt;
            
            if(ans>k)break;
            
        }
        
        return ans;
    }
};