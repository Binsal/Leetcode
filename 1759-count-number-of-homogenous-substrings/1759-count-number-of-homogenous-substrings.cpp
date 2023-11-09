class Solution {
public:
    int countHomogenous(string s) {
        int count=1;
        int mod=1e9+7;
        
        
        int cur_count=1;
        
        for(int i=1;i<s.size();i++){
            
            if(s[i]==s[i-1]){
                cur_count++;
                count%=mod;
            }
            else{
                cur_count=1;
            }
            count+=cur_count;
        }
        
        return count%mod;
    }
};