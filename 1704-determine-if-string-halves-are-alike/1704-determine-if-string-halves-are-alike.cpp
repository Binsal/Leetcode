class Solution {
public:
    bool halvesAreAlike(string s) {
        int i=0;
        int j=s.size()-1;
        
        int count1=0;
        int count2=0;
        
        while(i<=j){
            if(s[i]=='a'||  s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                count1++;
            }
            
            if(s[j]=='a'|| s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'){
                count2++;
            }
            
            i++;
            j--;
        }
        
        if(count1==count2) return true;
        return false;
    }
};