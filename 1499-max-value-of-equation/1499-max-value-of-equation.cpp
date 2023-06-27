class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int ans=INT_MIN;
        priority_queue<pair<int,int>>pq;
        
        int i=0;
        int j=1;
        
        pq.push({points[0][1]-points[0][0],points[0][0]});
        while(j<points.size()){
            
            while(!pq.empty() && abs(points[j][0]-pq.top().second)>k){
                pq.pop();
            }
             
            if(!pq.empty()){
                ans=max(ans,pq.top().first+points[j][0]+points[j][1]);
            }
                
            pq.push({points[j][1]-points[j][0],points[j][0]});
            j++;
        }
        
        return ans;
    }
};