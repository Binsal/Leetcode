class Solution {
public:
    int minSteps(string s, string t) {
        int moves=0;
        
        vector<int>freqs(26,0);
        vector<int>freqt(26,0);
        
        for(int i=0;i<s.size();i++){
            freqs[s[i]-'a']++;
        }
        
        for(int i=0;i<t.size();i++){
            freqt[t[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(freqs[i]>freqt[i]){
                moves+=freqs[i]-freqt[i];
            }
        }
        
        return moves;
    }
};