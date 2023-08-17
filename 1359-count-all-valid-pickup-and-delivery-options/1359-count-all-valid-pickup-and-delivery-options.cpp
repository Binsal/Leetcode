class Solution {
public:
    int countOrders(int n) {
        int mod=1e9+7;
        
        long long fact=1;
        
        for(int i=1;i<=n;i++){
           fact=(fact*i)%mod;
        }
        
        for(int i=1;i<=2*n-1;i+=2){
            fact=(fact*i)%mod;
           
        }
        
        return fact%mod;
    }
};