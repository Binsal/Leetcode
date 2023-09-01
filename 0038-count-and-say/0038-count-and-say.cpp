class Solution {
public:
    
    string fun(string &s){
        
       queue<pair<int,int>>q;
        
        for(int i=0;i<s.size();i++){
            
           int val=(s[i]-'0');
           int count=1;
            
           while(i<s.size()-1 && s[i]==s[i+1]) {
               count++;
               i++;
           }
            
           q.push({count,val}) ;
        }
        
        
        string str="";
        
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            str+=to_string(x.first);
            str+=to_string(x.second);
        }
        
        return str;
    }
    
    string countAndSay(int n) {
        string ans="1";
        
        for(int i=1;i<n;i++){
            
            string str=fun(ans);
            ans=str;
        }
        
        return ans;
    }
};