class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>color(n+1,0);
        
        vector<vector<int>>adj(n+1);
        
        for(auto vec:dislikes){
            adj[vec[0]].push_back(vec[1]);
            adj[vec[1]].push_back(vec[0]);
        }
        
        for(int i=1;i<=n;i++){
            
            if(color[i]==0){
                
                queue<int>q;
              
                q.push(i);
                color[i]=1;
                while(!q.empty()){
                    int top=q.front();
                    q.pop();
                   
                    for(auto nei:adj[top]){
                        
                        if(color[nei]==color[top])return false;
                        if(color[nei]==0){
                            color[nei]=-color[top];
                            q.push(nei);
                        }
                        
                    }
                    
                }
                
            }
        }
        
        return true;
        
    }
};