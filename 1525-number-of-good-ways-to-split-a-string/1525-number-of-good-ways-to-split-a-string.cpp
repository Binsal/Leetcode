class Solution {
public:
    int numSplits(string s) {
        set<char>st1;
        set<char>st2;
        int count=0;
        
        map<int,int>mp;
        
        for(auto ch:s){
            st1.insert(ch);
            mp[ch]++;
        }
        
        for(int i=0;i<s.size();i++){
            st2.insert(s[i]);
            mp[s[i]]--;
            if(mp[s[i]]==0) st1.erase(s[i]);
            
            if(st1.size()==st2.size())count++;
        }
            
        return count;
    }
};