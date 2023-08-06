class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int>v(intervals.size(),-1);
        
        
        map<int,int>mp;
        
        for(int i=0;i<intervals.size();i++){
            mp[intervals[i][0]]=i;
        }
        
        for(int i=0;i<intervals.size();i++){
            
            v[i]=mp.lower_bound(intervals[i][1])!=mp.end()?mp.lower_bound(intervals[i][1])->second:-1;
            
        }
        
        return v;
    }
};