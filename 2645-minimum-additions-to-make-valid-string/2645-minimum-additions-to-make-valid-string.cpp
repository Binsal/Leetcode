class Solution {
public:
    int addMinimum(string word) {
        int count=0;
        int i=0;
        while(i<word.size()){
            (word[i]=='a')?i++:count++;
            (word[i]=='b')?i++:count++;
            (word[i]=='c')?i++:count++;
        }
        
      
        return count;
    }
};