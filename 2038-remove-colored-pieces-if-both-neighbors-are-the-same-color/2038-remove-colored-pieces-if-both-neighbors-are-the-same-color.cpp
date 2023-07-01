class Solution {
public:
    bool winnerOfGame(string colors) {
        int count1=0;
        int count2=0;
        
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]=='A'){
                int num=0;
               while(colors[i]=='A'){
                   num++;
                   i++;
               }
                
                if(num>=3){
                    count1+=num-2;
                }
                i--;
            }
            
            else if(colors[i]=='B'){
              int num=0;
               while(colors[i]=='B'){
                   num++;
                   i++;
               }
                
                if(num>=3){
                    count2+=num-2;
                }
                i--;
            }
        }
        
        if(colors.size()<=2){
            return false;
        }
        
        if(count1>count2)return true;
        return false;
    }
};