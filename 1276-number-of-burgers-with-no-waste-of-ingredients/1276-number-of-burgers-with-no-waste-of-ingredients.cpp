class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int>v;
        if(tomatoSlices%2!=0)return v;
        
        if(cheeseSlices>tomatoSlices/2)return v;
        
        int jumbo=(tomatoSlices)/2-cheeseSlices;
        
        int small=cheeseSlices-jumbo;
        
        if(small<0 || jumbo<0)return v;
        
        v.push_back(jumbo);
        v.push_back(small);
        
        return v;
    }
};