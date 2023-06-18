class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>v;
        
        vector<bool>visited(n);
        
        for(int i=0;i<edges.size();i++){
            visited[edges[i][1]]=true;
        }
        
        for(int i=0;i<n;i++){
            if(visited[i]==0)v.push_back(i);
        }
        
        return v;
    }
};