class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count=0;
        
        vector<int>cnt(26,0);
        
        for(int i=0;i<chars.size();i++){
            cnt[chars[i]-'a']++;
        }
        
        
        for(int i=0;i<words.size();i++){
            vector<int>pre(26,0);
            string str=words[i];
           bool posss=true;
            
            for(int j=0;j<str.size();j++){
                
                pre[str[j]-'a']++;
                if(pre[str[j]-'a']>cnt[str[j]-'a']){
                    posss=false;
                    break;
                }
                
                
            }
            
            if(posss){
                count+=str.size();
            }
            
        }
        
        return count;
    }
};