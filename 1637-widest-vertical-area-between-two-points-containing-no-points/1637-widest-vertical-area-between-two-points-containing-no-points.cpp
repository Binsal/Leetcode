class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int maxi=0;
        
        set<int>st;
        
        for(auto p:points)st.insert(p[0]);
        
        for(auto it=next(begin(st));it!=st.end();it++){
            maxi=max(maxi,*it-*prev(it));
        }
        
        return maxi;
    }
};