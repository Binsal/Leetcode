class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        
        vector<vector<int>>moves={{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
        
        string end="123450";
        
        string begin="";
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                begin+=to_string(board[i][j]);
            }
        }
        
        queue<pair<string,int>>q;
        unordered_set<string>visited;
        
        q.push({begin,0});
        visited.insert(begin);
        
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            
            string curr=p.first;
            int dist=p.second;
            
            
            int ind=curr.find("0");
            
            if(curr==end)return dist;
            
            for(auto &i : moves[ind]){
                string next=curr;
                swap(next[i],next[ind]);
                
                if(!visited.count(next)){
                    visited.insert(next);
                    q.push({next,dist+1});
                }
            }
            
        }
        
        return -1;
    }
};