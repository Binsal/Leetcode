class Solution {
public:
    int countPairs(vector<vector<int>>& coordinates, int k) {
        int count=0;
        
        map<pair<int,int>,int>mp;
        
        
        for(auto p:coordinates){
            
            for(int i=0;i<=k;i++){
                
                int a=i;
                int b=k-i;
                
                int v1=p[0]^a;
                int v2=p[1]^b;
                
                count+=mp[{v1,v2}];
                
            }
            
            mp[{p[0],p[1]}]++;
            
        }
        
        return count;
    }
};