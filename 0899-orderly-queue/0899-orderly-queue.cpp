class Solution {
public:
    string orderlyQueue(string s, int k) {
        string ans="~";
        
        if(k==1){
            
            for(int i=0;i<s.size();i++){
               string str=s.substr(1)+s[0];
                s=str;
                ans=min(ans,str);
            }
            
            return ans;
            
        }
        else {
            sort(s.begin(),s.end());
            return s;
        }
        
        return "";
    }
};