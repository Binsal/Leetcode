class Solution {
public:
    
    int rec(vector<string>&words,vector<int>&score,vector<int>&cnt,int i){
        if(i>=words.size())return 0;
        
        int skip=rec(words,score,cnt,i+1);
        vector<int>cnt1(begin(cnt),end(cnt));
        bool poss=true;
        int sum=0;
        
        for(auto w:words[i]){
            
            if(--cnt1[w-'a']<0){poss=false;break;}
            sum+=score[w-'a'];
            
        }
        
        if(poss==false)return skip;
        
        
        return max(skip,sum+rec(words,score,cnt1,i+1));
        
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        
        vector<int>cnt(26,0);
        
        for(auto ch:letters)cnt[ch-'a']++;
        
        return rec(words,score,cnt,0);
    }
};