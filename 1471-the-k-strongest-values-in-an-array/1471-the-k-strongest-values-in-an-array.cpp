class Solution {
public:
    
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second)return a.first>b.first;
         return a.second>b.second;
       
    }
    vector<int> getStrongest(vector<int>& arr, int k) {
        if(arr.size()==1)return arr;
        vector<int>v;
        
        sort(arr.begin(),arr.end());
        
        int ind=(arr.size()-1)/2;
        int med=arr[ind];
        
        vector<pair<int,int>>pq;
        
        
        for(auto x:arr){
            pq.push_back({x,abs(x-med)});
        }
        
        sort(pq.begin(),pq.end(),cmp);
        
        
        for(int i=0;i<k;i++){
            v.push_back(pq[i].first);
        }
        
        
        return v;
    }
};