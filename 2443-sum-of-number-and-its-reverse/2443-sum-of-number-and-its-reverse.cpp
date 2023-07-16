class Solution {
public:
    
    int reverse(int num){
        int ans=0;
        
        while(num){
            ans=ans*10+num%10;
            num/=10;
        }
        
        return ans;
    }
    
    bool sumOfNumberAndReverse(int num) {
        if(num==0)return 1;
        for(int i=1;i<=num;i++){
           // cout<<i
            if(i+reverse(i)==num) return true;
        }
       
        return false;
    }
};