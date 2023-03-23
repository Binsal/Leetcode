class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int count=0;
        map<int,int>mp;
        
        for(int i=lowLimit;i<=highLimit;i++){
            int sum=0;
            int num=i;
            
            while(num){
                sum+=num%10;
                num=num/10;
            }
            
            mp[sum]++;
        }
        
        for(auto x:mp){
            count=max(count,x.second);
        }
        return count;    
    }
};