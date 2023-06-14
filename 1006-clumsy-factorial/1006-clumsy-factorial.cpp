class Solution {
public:
    
    
    int rec(int n){
         n=abs(n);
        if(n==0)return 0;
        if(n==1)return -1;
        if(n==2)return -2;
        if(n==3)return -6;
        
        return -n*(n-1)/(n-2)+(n-3)+rec(n-4);
        
    }
    int clumsy(int n) {
        n=abs(n);
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 6;
        
        return n*(n-1)/(n-2)+(n-3)+rec(n-4);
    }
};