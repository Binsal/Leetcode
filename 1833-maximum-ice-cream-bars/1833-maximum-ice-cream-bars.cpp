class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans=0;
        
        sort(costs.begin(),costs.end());
        int count=0;
        
        for(int i=0;i<costs.size();i++){
            if(costs[i]>coins)break;
            coins-=costs[i];
            ans++;
        }
        
        
        return ans;
    }
};