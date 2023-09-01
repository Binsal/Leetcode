class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int ans=INT_MAX;
        
        vector<int>v;
        
        for(auto str:timePoints){
            
             int num=stoi(str.substr(0,2))*60+stoi(str.substr(3,2));
             v.push_back(num); 
        }
        
        sort(v.begin(),v.end());
        
        for(int i=1;i<v.size();i++){
            int num1=v[i];
            int num2=v[i-1];
            
            ans=min(ans,num1-num2);
            
        }
        
        ans=min(ans,v[0]+1440-v[v.size()-1]);
        return ans;
    }
};