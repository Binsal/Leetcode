class Solution {
public:
    string decodeString(string s) {
        string ans="";
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
          
            if(s[i]!=']')st.push(s[i]);
            else{
                
                string curr="";
                
                while(!st.empty() && st.top()!='['){
                    curr=st.top()+curr;
                    st.pop();
                    
                }
                
                if(!st.empty())st.pop();
                
                string num="";
                
                while(!st.empty() && isdigit(st.top())){
                    num=st.top()+num;
                    st.pop();
                }
                
                int no=stoi(num);
                
                while(no--){
                    
                    for(auto ch:curr)st.push(ch);
                }
                
            }
            
        }
        
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        
        return ans;
    }
};