class Solution {
public:
    
    static bool cmp(pair<int,int>&p1,pair<int,int>&p2){
        
        if(p1.first==p2.first)return p1.second<p2.second;
        return p1.first<p2.first;
    }
    
    long long findScore(vector<int>& nums) {
        long long ans=0;
        
        int n=nums.size();
        
        vector<pair<int,int>>vec;
        vector<int>visited(n,0);
        
        for(int i=0;i<n;i++){
            vec.push_back({nums[i],i});
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        for(auto x:vec){
            if(visited[x.second]==0){
                ans+=x.first;
                
                if(x.second>0)visited[x.second-1]=1;
                if(x.second<n-1)visited[x.second+1]=1;
            }
        }
        
        return ans;
    }
};