class Solution {
public:
    
    // static bool cmp(pair<int,int>&p1,pair<int,int>&p2){
    //     return p1.second>p2.second;
    // }
    
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
     
        int n=arr.size();
        int count=0;
        int sz=n;
        
        priority_queue<int>pq;
        
        for(auto x:mp){
            pq.push(x.second);
        }
        
        while(!pq.empty()){
            sz-=pq.top();
            pq.pop();
            if(sz<=n/2)break;
            count++;
        }
        
        return count+1;
    }
};