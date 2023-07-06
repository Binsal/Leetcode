class Solution {
public:
    vector<int>res;
    vector<int>count;
    vector<unordered_set<int>>tree;
    
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        tree.resize(n);
        res.assign(n,0);
        count.assign(n,1);
        
        for(int i=0;i<edges.size();i++){
            tree[edges[i][0]].insert(edges[i][1]);
            tree[edges[i][1]].insert(edges[i][0]);
        }
        
        dfs1(0,-1);
        dfs2(0,-1);
        return res;
    }
    
    void dfs1(int root,int prev){
        
        for(auto i:tree[root]){
            if(i==prev)continue;
            
            dfs1(i,root);
            count[root]+=count[i];
            res[root]+=res[i]+count[i];
        }
        
    }
    
    void dfs2(int root,int prev){
        for(auto i:tree[root]){
            if(i==prev)continue;
            res[i]=res[root]-count[i]+count.size()-count[i];
            dfs2(i,root);
        }
    }
};