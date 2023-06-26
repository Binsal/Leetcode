class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        if(a[0]==b[0])return a[1]>b[1];
        return a[0]<b[0];
    }
        
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), comp);
        
        vector<int>v;
        
        for(auto vec:envelopes){
            
            if(v.empty() || (vec[1]>v.back())){
                v.push_back(vec[1]);
            }
            else{
        
               int ind=lower_bound(v.begin(),v.end(),vec[1])-v.begin(); 
               v[ind]=vec[1]; 
            }
        }
        
        return v.size();
    }
};