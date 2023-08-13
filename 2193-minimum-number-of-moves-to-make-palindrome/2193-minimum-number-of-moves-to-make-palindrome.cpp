class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n = s.size();
        int i=0;
        int j=n-1;
        int ans=0;
        
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                int found=-1;
                
                for(int k=j-1;k>i;k--){
                    
                    if(s[i]==s[k]){
                        found=k;
                        break;
                    }
                }
                
                
                if(found>0){
                    
                    for(int k=found;k<j;k++){
                        swap(s[k],s[k+1]);
                        ans++;
                    }
                    
                    i++;
                    j--;
                }
                
                else{
                    swap(s[i],s[i+1]);
                    ans++;
                }
                
            }
        }
        
        
        return ans;
    }
};