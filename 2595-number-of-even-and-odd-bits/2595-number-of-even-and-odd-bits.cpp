class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>v(2,0);
        
        for(int i=0;i<32;i++){
            
            int k=1<<i;
            
            if((n&k)){
                if(i%2==0)v[0]++;
                else v[1]++;
            }
            
        }
        
        
        return v;
    }
};