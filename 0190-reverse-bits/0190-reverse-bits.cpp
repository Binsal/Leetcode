class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num=0;
       // cout<<n<<endl;
        
        string str="";
        
        while(n>0){
            if(n%2!=0){
                str='1'+str;
            }
            else{
                str='0'+str;
            }
            
            n=n/2;
        }
        
        while(str.size()<32){
            str='0'+str;
        }
        
        for(int i=0;i<32;i++){
            if(str[i]=='1'){
                num+=pow(2,i);
            }
        }
        
       // cout<<str<<endl;
        return num;
    }
};