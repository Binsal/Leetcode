class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>v;
        int val;
        for(int i=0;i<pref.size();i++){
            if(i==0){
                v.push_back(pref[0]);
                val=pref[0];
            }
            else {
                v.push_back(pref[i]^pref[i-1]);
            }
        }
        
        return v;
    }
};