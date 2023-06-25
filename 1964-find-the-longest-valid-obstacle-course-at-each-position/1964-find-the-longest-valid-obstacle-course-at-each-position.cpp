class Solution {
public:
    
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& ob) {
        vector<int>ans(ob.size(),0);
        vector<int>v;
        
        for(int i=0;i<ob.size();i++){
            
            if(v.empty() || ob[i]>=v.back()){
                v.push_back(ob[i]);
                ans[i]=v.size();
            }
            
            else {
                int ind=upper_bound(v.begin(),v.end(),ob[i])-v.begin();
                v[ind]=ob[i];
                ans[i]=ind+1;
            }
            
        } 
        
        return ans;
    }
};