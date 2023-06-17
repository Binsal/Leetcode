class DSU {
public:
    vector<int> Parent, Rank;
    DSU(int n) {
    Parent.resize(n);
    Rank.resize(n, 0);
    for (int i = 0; i < n; i++) Parent[i] = i;
    }
    int Find(int x) {
    return Parent[x] = Parent[x] == x ? x : Find(Parent[x]);
    }
   
    bool Union(int x, int y) {
        
        int xset = Find(x), yset = Find(y);
        if (xset != yset) {
        Rank[xset] < Rank[yset] ? Parent[xset] = yset : Parent[yset] = xset;
        Rank[xset] += Rank[xset] == Rank[yset];     
        return true;
     }
    return false;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        
        DSU dsuA(n+1);
        DSU dsuB(n+1);
        
        sort(edges.begin(),edges.end());
        
        int countA=0;
        int countB=0;
        int removed_edges=0;
        
        for(int i=edges.size()-1;i>=0;i--){
            
            if(edges[i][0]==3){
                
                if(dsuA.Union(edges[i][1],edges[i][2])){
                    dsuB.Union(edges[i][1],edges[i][2]);
                    countA++;
                    countB++;
                }
                else removed_edges++;
                
            }
            
            if(edges[i][0]==1){
                if(dsuA.Union(edges[i][1],edges[i][2])){
                 
                    countA++;
                }
                else removed_edges++;
            }
            
            
              if(edges[i][0]==2){
                 if(dsuB.Union(edges[i][1],edges[i][2])){
                   
                    countB++;
                }
                else removed_edges++;
            }
            
            
            
        }
        
       if(countA==n-1 && countB==n-1)return removed_edges;
        
        return -1;
    }
};