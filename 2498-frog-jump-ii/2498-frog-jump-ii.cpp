class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        if(n==2)return stones[1];
        vector<bool>visited(n,-1);
        int maxi=0;
        
//         for(int i=n-1;i>=0;i--){
            
            
            
//         }
        
        for(int i=0;i<n-2;i++){
            maxi=max(maxi,stones[i+2]-stones[i]);
            maxi=max(maxi,stones[i+1]-stones[i]);
        }
        
        return maxi;
    }
};