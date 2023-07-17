class Solution {
public:
     int count=0;
    bool seen[16]={};
    void rec(int i,int n){
       
        if(i>n){
            count++;
            return ;
        }
        
        for(int idx=1;idx<=n;idx++){
            
            if(seen[idx]==false && (i%idx==0 || idx%i==0)){
                    seen[idx]=1;
                  
                    rec(i+1,n);
                    
                    seen[idx]=0;
                }
            }
        }
        
    
    
    int countArrangement(int n) {
       
        if(n<4)return n;
        rec(1,n);
        return count;
    }
};