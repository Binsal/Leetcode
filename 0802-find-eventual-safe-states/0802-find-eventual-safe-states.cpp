class Solution {
public:
    
    unordered_set<int>visited;
    unordered_set<int>cycle;
    unordered_set<int>safe;
    
    bool rec(int val,vector<vector<int>>&graph){
        
          if(safe.find(val)!=safe.end())return true;
        
        if(cycle.find(val)!=cycle.end())return false;
        
      
        
        if(visited.find(val)!=visited.end()){
            cycle.insert(val);
            return false;
        }
     
        visited.insert(val);
        
        for(int j=0;j<graph[val].size();j++){
            if(!rec(graph[val][j],graph)){
                cycle.insert(graph[val][j]);
                return false;
            }
        }
        
        safe.insert(val);
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
       
        
        for(int i=0;i<graph.size();i++){
          
               if(rec(i,graph)){
                
                   ans.push_back(i);
               }
            
        }
        
        return ans;
    }
};