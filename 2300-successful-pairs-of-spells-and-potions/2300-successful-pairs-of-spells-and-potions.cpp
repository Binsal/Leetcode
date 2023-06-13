class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>v;
        
        sort(potions.begin(),potions.end());
        
        for(int i=0;i<spells.size();i++){
            
            int low=0;
            int high=potions.size()-1;
            
            while(low<=high){
                int mid=(low+high)/2;
                 long long product = (long long)spells[i] * (long long)potions[mid];
                
                if(product>=success){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
               
            }
            
            v.push_back(potions.size()-low);
        }
        
        return v;
    }
};