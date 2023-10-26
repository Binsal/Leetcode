class Solution {
public:
    string reverseWords(string s) {
        string str="";
        stack<char>st;

        for(int i=0;i<s.size();i++){
            string word="";
            if(s[i]==' '){
                if(!st.empty()){
                    while(!st.empty()){
                        word+=st.top();
                        st.pop();
                    }
                    str+=word;
                }
                str+=" ";
            }
            else{
                st.push(s[i]);
            }

        }

        while(!st.empty()){
            str+=st.top();
            st.pop();
        }

        return str;
    }
};