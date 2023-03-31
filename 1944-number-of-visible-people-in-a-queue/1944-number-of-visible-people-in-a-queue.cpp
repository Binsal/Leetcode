class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int>v(heights.size(),0);
        
        stack<int>st;
        
        for(int i=heights.size()-1;i>=0;i--){
            
                while(!st.empty() && st.top()<heights[i]){
                    // ind=st.top();
                    st.pop();
                    v[i]++;
                }
            
            if(!st.empty())v[i]++;
                    
            st.push(heights[i]); 
            
        }
        
        
        return v;
    }
};