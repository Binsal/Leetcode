class Solution {
public:
    
    int maxi=1;
    int dp[1001]={};
    
    int rec(vector<int>&arr,int d,int i){
        
        if(dp[i])return dp[i];
        int n=arr.size();
        
        int ans=1;
        
        for(int j=i+1;j<=min(i+d,n-1) && arr[j]<arr[i];j++){
            
                ans=max(ans,1+rec(arr,d,j));

        }
        
        for(int j=i-1;j>=max(i-d,0) && arr[j]<arr[i];j--){
           
                ans=max(1+rec(arr,d,j),ans);
            
        }
        
       
        dp[i]=ans;
        return ans;
    }
    
    int maxJumps(vector<int>& arr, int d) {
        
        for(int i=0;i<arr.size();i++){
             maxi=max(maxi,rec(arr,d,i));
        }
        return maxi;
    }
};