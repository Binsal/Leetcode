class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count=0;
        
        int prev=-1;
        
        for(auto str:bank){
            int cnt=0;
            
            for(int i=0;i<str.size();i++){
                if(str[i]=='1')cnt++;
            }
            
            if(cnt>0 ){
                if(prev!=-1)count+=prev*cnt;
            prev=cnt;
            }
        }
        
        return count;
    }
};