class Solution {
public:
    int minOperations(int n) {
        int ans=0;
        
        if(n%2!=0){
            
            for(int i=n/2+1;i<n;i++){
                ans+=abs((2*i+1)-(n));
               
            }
        }
        else{
           
            for(int i=n/2;i<n;i++){
                ans+=abs((2*i+1)-(n));
            }
        }
        
//         if(n%2){
            
//         }
//         else{
            
//         }
        
        return ans;
    }
};