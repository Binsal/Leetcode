class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0;
        
        vector<int>vec;
        
        for(int i=0;i<rocks.size();i++){
             vec.push_back(capacity[i]-rocks[i]);
        }
        
        int i=0;
        sort(vec.begin(),vec.end());
        
        while(i<vec.size()){
            if(vec[i]>additionalRocks)break;
            else{
                additionalRocks-=vec[i];
                count++;
                i++;
            }
        }
        
        
        return count;
    }
};