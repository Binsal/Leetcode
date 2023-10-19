class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        
        for(auto ch:s){
            if(ch=='#'  && !st1.empty())st1.pop();
            else st1.push(ch);
        }
        
        for(auto ch:t){
           if(ch=='#' && !st2.empty())st2.pop();
            else st2.push(ch);
        }
        
        string str1="";
        string str2="";
        
        while(!st1.empty()){
            if(st1.top()!='#')
            {str1+=st1.top();}
            st1.pop();
        }
        
        while(!st2.empty()){
             if(st2.top()!='#'){
            str2+=st2.top();}
            st2.pop();
        }
        
        cout<<str1<<endl;
        cout<<str2<<endl;
        if(str1==str2)return true;
        return false;
        
    }
};