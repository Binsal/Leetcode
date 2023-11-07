class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>v;
        int count=0;
        
        for(int i=0;i<dist.size();i++){
            
            if(dist[i]%speed[i]==0){
                v.push_back(dist[i]/speed[i]);
            }
            else{
                v.push_back(dist[i]/speed[i]+1);
            }
            
        }
        
        sort(v.begin(),v.end());
        
        int time=0;
        
        for(int i=0;i<v.size();i++){
            if(v[i]>time){
                count++;
                time++;

            }
            else break;
        } 
        return count;
    }
};