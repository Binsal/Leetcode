class Solution {
public:
    int minSteps(string s, string t) {
        int steps=0;
        string str1;
        string str2;
        
        if(s.size()<t.size()){
            str1=s;
            str2=t;
        }
        else{
            str2=t;
            str1=s;
        }
        
        vector<int>vec(26,0);
        
        for(int i=0;i<t.size();i++){
            vec[t[i]-'a']++;
        }
        
        for(int i=0;i<s.size();i++){
            vec[s[i]-'a']--;
        }
        
        for(int i=0;i<26;i++)steps+=abs(vec[i]);
        
        return steps;
    }
};