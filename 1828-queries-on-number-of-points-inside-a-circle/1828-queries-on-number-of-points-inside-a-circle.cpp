class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>v;
        
        for(auto q:queries){
            int count=0;

            
            for(auto vec:points){
                
               int x=vec[0];
                int y=vec[1];
                
                if((x-q[0])*(x-q[0])+(y-q[1])*(y-q[1])<=q[2]*q[2])count++;

            }
            
            v.push_back(count);
        }
        
        return v;
    }
};