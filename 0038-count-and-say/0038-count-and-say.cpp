class Solution {
public:
   
    
    string countAndSay(int n) {
        if(n==0)return "";
        string ans="1";
        
        while(--n){
            
            string str="";
            
            for(int i=0;i<ans.size();i++){
            
             
               int count=1;

               while(i<ans.size()-1 && ans[i]==ans[i+1]) {
                   count++;
                   i++;
               }
            
                str+=to_string(count);
                str+=ans[i];
            }
    
            ans=str;
        }
        
        return ans;
    }
};