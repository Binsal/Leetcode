class Solution {
public:
    string removeStars(string s) {
        string str="";
        stack<char>st;
        
        int count=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                count++;
            }
        }
        
        if(count==0)return s;
           
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                
                if(!st.empty()){
                    st.pop();
                }
                
            }
            else{
                st.push(s[i]);
            }
        }
        
        while(!st.empty()){
            str=st.top()+str;
            st.pop();
        }
        
        return str;
    }
};