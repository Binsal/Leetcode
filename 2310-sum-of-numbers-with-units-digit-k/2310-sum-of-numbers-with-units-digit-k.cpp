class Solution {
public:
    
    
    int minimumNumbers(int num, int k) {
       
        if(num==0)return 0;
        if(num%10==k)return 1;
        if(k%2==0 && num%2!=0)return -1;
        if(num<k)return -1;
        int mini=-1;
        
        
        for(int i=1;i<=10;i++){
            if(num<i*k)return -1;
            if((num-i*k)%10==0)return i;
        }
        
        
        return mini;
    }
    
};