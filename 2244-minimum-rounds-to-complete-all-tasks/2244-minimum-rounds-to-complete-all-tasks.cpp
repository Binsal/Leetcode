class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        int count=0;
        
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        
        
        for(auto x:mp){
            
            
            int val=x.second;
            
                
                if(val==1)return -1;
                
                if(x.second%3==0){
                    count+=val/3;
                }
               else{
                    count+=val/3+1;
                }
           
        
        }
        return count;
    }
        
        
};