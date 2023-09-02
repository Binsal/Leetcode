class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int maxi=max({a,b,c});
        int count=0;
        
        int i=1;
        
        for(int j=0;j<32;j++){
            
            int set_bits=0;
            
            if((a&1)==1)set_bits++;
            if((b&1)==1)set_bits++;
            
            int set=c&i;
            
            if(set){
                if(set_bits==0)count++;
            }
            else{
                if(set_bits==2)count+=2;
                if(set_bits==1)count++;
            }
            
            a=(a>>1);
            b=(b>>1);
            c=(c>>1);
            
        }
        
            
        return count;
    }
};