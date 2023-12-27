class Solution {
public:
    int minCost(string colors, vector<int>& nTime) {
        char c='*';
        int time=0;
        int mcost=0;
        int prevc=0;
        
        int len=colors.length();
        
        for(int i=0;i<len;i++){
            if(colors[i]!=c){
                prevc=nTime[i];
                c=colors[i];
            }
            
            else{
                if(nTime[i]<prevc){
                    mcost+=nTime[i];
                }
                
                else{
                mcost+=prevc;
                    prevc=nTime[i];
                    
                }
            }
            
        }
        
        return mcost;
    }
};