class Solution {
public:
    int ans=0;
    
    int dfs(int n,vector<int>&cost,int i){
        if(i>n)return 0;
        
        int left=0;
        int right=0;
        
        left=dfs(n,cost,2*i);
        right=dfs(n,cost,2*i+1);
        
        
        ans+=abs(left-right);
        
        
        return cost[i-1]+max(left,right);
        
    }
    
    int minIncrements(int n, vector<int>& cost) {
        
        int total=0;
        
        dfs(n,cost,1);
        
        return ans;
    }
};