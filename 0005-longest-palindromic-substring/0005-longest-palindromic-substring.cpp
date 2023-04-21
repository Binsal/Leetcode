class Solution {
public:
    
    string longestPalindrome(string s) {
        int n=s.size();
      
        string palindrome="";
           int l;
            int h;
            
        if(n==1)return s;
        if(n==2){
            if(s[0]==s[1])return s;
            else return palindrome+=s[0];
        }
            
//         if(s.size()%2==0){
//             l=n/2-1;
//             h=n/2;
//         }
//         else{
//             l=h=n/2;
//         }
        
        int mid=s.size()/2;
        for(int i=mid;i>=0;i--){
            int l=i-1;
            int h=i+1;
            
            while(l>=0 && h<n){

                if(s[l]==s[h]){
                      if(palindrome.size()<h-l+1){
                        palindrome=s.substr(l,h-l+1);
                    }

                    l--;
                    h++;
             }
            else{
                break;
            }
        
        }
      }  
        
        for(int i=mid;i<n;i++){
            int l=i-1;
            int h=i+1;
            
            while(l>=0 && h<n){

                if(s[l]==s[h]){
                      if(palindrome.size()<h-l+1){
                        palindrome=s.substr(l,h-l+1);
                    }

                    l--;
                    h++;
             }
            else{
                break;
            }
        
        }
      }  
        
    for(int i=mid;i<n;i++){
            int l=i-1;
            int h=i;
            
            while(l>=0 && h<n){

                if(s[l]==s[h]){
                      if(palindrome.size()<h-l+1){
                        palindrome=s.substr(l,h-l+1);
                    }

                    l--;
                    h++;
             }
            else{
                break;
            }
        
        }
      }  
        
        for(int i=mid;i>=0;i--){
            int l=i-1;
            int h=i;
            
            while(l>=0 && h<n){

                if(s[l]==s[h]){
                      if(palindrome.size()<h-l+1){
                        palindrome=s.substr(l,h-l+1);
                    }

                    l--;
                    h++;
             }
            else{
                break;
            }
        
        }
      }  
        
        if(palindrome.size()==0)palindrome+=s[0];
        
        return palindrome;
    }
};