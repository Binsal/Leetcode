class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int i=0;
        
         while(i<flowerbed.size()){
            
            if(flowerbed[i]==1){
                i+=2;
                continue;
            }
            if(flowerbed[i]==0){
                
                if((i<flowerbed.size()-1 && flowerbed[i+1]!=1)|| i==flowerbed.size()-1){
                    n--;
                    flowerbed[i]=1;
                    i+=2;
                    continue;
                }
            }  
           i++;
        }
        
        
        for(int j=0;j<flowerbed.size()-1;j++){
            if(flowerbed[j]==1 && flowerbed[j+1]==1){
                n++;
                cout<<j<<endl;
                cout<<n<<endl;
                cout<<endl;
            }
        }
        
        if(n<=0)return true;
        
        return false;
        
    }
};