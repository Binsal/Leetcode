class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        set<char>st;
        
        for(auto ch:allowed)st.insert(ch);
        
        for(auto str:words){
            for(int i=0;i<str.size();i++){
                if(st.find(str[i])==st.end())break;
                if(i==str.size()-1)count++;
            }
        }
        
        return count;
    }
};