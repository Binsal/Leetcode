class Solution {
public:
    bool judgeSquareSum(int c) {
       
        for(int i=0;i<=sqrt(c);i++){
            int second=c-i*i;
            
            int sqrtsec=sqrt(second);
            
            if(sqrtsec*sqrtsec==second)   return true;
        }
         
        return false;
        
      
    }
};