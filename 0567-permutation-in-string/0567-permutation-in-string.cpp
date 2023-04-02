class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int>v(26,0);
        
        int i=0;
        int j=0;
        
        int count=0;
        for(int i=0;i<s1.size();i++){
            v[s1[i]-'a']++;
            count++;
        }
        
        vector<int>vec(26,0);
        int count2=0;
        
        while(j<s2.size()){
            
            vec[s2[j]-'a']++;
            count2++;
            
            if(vec[s2[j]-'a']>v[s2[j]-'a']){
                
                while(vec[s2[j]-'a']>v[s2[j]-'a']){
                    vec[s2[i]-'a']--;
                    i++;
                    count2--;
                }
                
            }
            
            if(count==count2){
                return true;
            }
            
            j++;
        }
    
        return false;  
    }
};