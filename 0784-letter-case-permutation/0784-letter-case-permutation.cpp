class Solution {
public:
    
    void rec(string s,set<string>&st,int i){
        if(i==s.size()){
            st.insert(s);
            return;
        }
        
         s[i]=toupper((char)s[i]);
        rec(s,st,i+1);
       s[i]=tolower((char)s[i]);
        rec(s,st,i+1);
      
        
    }
    
    vector<string> letterCasePermutation(string s) {
         vector<string>v;
         set<string>st;
        
        // if(s.size()==1){
        //     v.push_back(s);
        //     string str=s;
        //     str[0]=toupper((char)str[0]);
        //     v.push_back(str);
        //     return v;
        //}
    
         rec(s,st,0);
        
        
        for(auto x:st){
            v.push_back(x);
        }
        
        
         return v;
    }
};