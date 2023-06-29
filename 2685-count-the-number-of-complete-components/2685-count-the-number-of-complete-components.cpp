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
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int count=0;
        
        DSU dsu(n);
        vector<int>indegree(n,0);
        for(int i=0;i<edges.size();i++){
            dsu.Union(edges[i][0],edges[i][1]);
            indegree[edges[i][0]]++;
            indegree[edges[i][1]]++;
        }
        
        vector<vector<int>>vec(n);
        
        for(int i=0;i<n;i++){
            vec[dsu.Find(i)].push_back(i);
        }
        
        for(int i=0;i<n;i++){
            if(vec[i].size()!=0){
                bool flag=true;
                for(int x:vec[i]){
                    if(indegree[x]!=vec[i].size()-1){
                        flag=false;
                        break;
                    }
                }
                if(flag)count++;
            }
        }
        
        
        return count;
    }
};