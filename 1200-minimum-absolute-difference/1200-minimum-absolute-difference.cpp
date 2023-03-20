class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>v;
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        
        for(int i=1;i<arr.size();i++){
            mini=min(mini,arr[i]-arr[i-1]);
        }
        
        for(int i=1;i<arr.size();i++){
            vector<int>vec;
            
            if(arr[i]-arr[i-1]==mini){
                vec.push_back(arr[i-1]);
                vec.push_back(arr[i]);
                 v.push_back(vec);
            }
           
        }
        return v;
    }
};