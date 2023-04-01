class Solution {
public:

    // static bool cmp(pair<int,string>&p1,pair<int,string>&p2){
    //     return p1.first>p2.first;
    // }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>v;
        vector<pair<int,string>>mp;

        for(int i=0;i<heights.size();i++){
            mp.push_back({heights[i],names[i]});
        }

        sort(mp.rbegin(),mp.rend());

        for(auto x:mp){
            v.push_back(x.second);
        }
        return v;
    }
};