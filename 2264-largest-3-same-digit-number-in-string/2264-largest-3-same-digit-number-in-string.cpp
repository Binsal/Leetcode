class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int val=0;
        
        for(int i=1;i<num.size();i++){
            if(num[i]==num[i-1] && num[i]==num[i+1]){
                if(num[i]-'0'>=val){
                    string str="";
                    str+=num[i];
                    str+=num[i];
                    str+=num[i];
                    ans=str;
                    val=num[i]-'0';
                }
            }
        }
        
        return ans;
    }
};