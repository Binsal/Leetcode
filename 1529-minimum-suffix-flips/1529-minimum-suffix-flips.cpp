class Solution {
public:
    int minFlips(string target) {
        int count=0;
        
        int i=0;
        
        while(i<target.size() && target[i]=='0')i++;
        
        if(i==target.size())return 0;
        
        bool flag=1;
        
        for(int j=i;j<target.size();j++){
            
            if(flag==1){
                while(j<target.size() && target[j]=='1'){
                    
                    j++;
                }
                j--;
                count++;
                flag=0;
            }
            else{
                 while(j<target.size() && target[j]=='0'){
                    
                    j++;
                }
                j--;
                count++;
                flag=1;
            }
            
        }
        
        return count;
    }
};