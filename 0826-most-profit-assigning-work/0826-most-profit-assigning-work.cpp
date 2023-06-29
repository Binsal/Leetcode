class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int total=0;
        
        vector<pair<int,int>>vec;
        
        for(int i=0;i<difficulty.size();i++){
            vec.push_back({difficulty[i],profit[i]});
        }
        
        sort(vec.begin(),vec.end(),[&](pair<int,int>&a,pair<int,int>&b){
            return a.first<b.first;
        });
        
        sort(worker.begin(),worker.end());
        
        int j=0;
        int maxi=0;
        
        for(int i=0;i<worker.size();i++){
            
            while(vec[j].first<=worker[i] && j<vec.size()){
                maxi=max(maxi,vec[j].second);
                j++;
            }
            //cout<<i<<" "<<j<<" "<<maxi<<endl;
            total+=maxi;
        }
        return total;
    }
};