class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        int n=rolls.size();
        map<int,int>mp;
        int count=0;
        int ans=0;
        
        for(int i=0;i<rolls.size();i++){
            
            mp[rolls[i]]++;
            
            if(mp[rolls[i]]==1)count++;
            
            if(count==k){
                ans++;
                mp.clear();
                count=0;
            }
            
        }
        
        return ans+1;
    }
};