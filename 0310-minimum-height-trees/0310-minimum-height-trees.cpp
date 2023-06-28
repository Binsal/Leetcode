class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>v;
        v.push_back(0);
        
        if(edges.size()==0)return v;
        if(n==1)return v;
        
        vector<int>indegree(n,0);
        vector<vector<int>>adj(n);
        
        for(int i=0;i<edges.size();i++){
            indegree[edges[i][0]]++;
            indegree[edges[i][1]]++;
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        queue<int>q;
        
        for(int i=0;i<n;i++){
            if(indegree[i]==1){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            
            v.clear();
            
            int sz=q.size();
            
            for(int j=0;j<sz;j++){
            
                int ele=q.front();
                v.push_back(ele);
                q.pop();

                for(auto neig : adj[ele]){

                        indegree[neig]--;
                        if(indegree[neig]==1){
                            q.push(neig);
                        }
                    
                }   
            }
        }
        
        return v;
    }
};