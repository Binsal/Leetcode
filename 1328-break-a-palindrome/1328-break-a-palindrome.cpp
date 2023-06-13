class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1 && palindrome=="a")return "";
        if(palindrome.size()==1)return "";
        string str="";
       
        
        int count=0;
        
         if(palindrome.size()%2!=0){
                for(int i=0;i<palindrome.size();i++){
                    if(i==palindrome.size()/2)continue;
                        if(palindrome[i]!='a'){
                            palindrome[i]='a';
                            count++;
                            break;
                        }
                }
         }
        
        else{
            for(int i=0;i<palindrome.size();i++){
                if(palindrome[i]!='a'){
                    palindrome[i]='a';
                    count++;
                    break;
                }
            }
        }
        
        if(count==0){palindrome[palindrome.size()-1]='b';}
        return palindrome;
    }
};