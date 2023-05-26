class Solution {
public:
    int minSteps(string s, string t) {
        int steps=0;
        
        vector<int>vec(26,0);
        
        for(int i=0;i<s.size();i++){
            vec[s[i]-'a']++;
        }
        
        for(int i=0;i<t.size();i++){
            vec[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++)steps+=abs(vec[i]);
        
        return steps;
    }
};