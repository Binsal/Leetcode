class Solution {
public:
    int lastRemaining(int n) {
        
        if(n==1)return n;
        
        int direction=1;
        int head=1;
        int mov=1;
        
        while(n>1){
            
            if(direction){
                head=head+mov;
            }
            else{
                if(n%2!=0){
                    head=head+mov;
                }
            }
            mov=mov*2;
            n=n/2;
            direction=!direction;
        }
        
        
        
        return head;
    }
};