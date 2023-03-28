class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>v;
        
        for(int i=0;i<boxes.size();i++){
            int ans=0;
            
            for(int j=0;j<boxes.size();j++){
                
                if(i==j)continue;
                
                if(boxes[j]=='1'){
                    if(j<i){
                        ans+=abs(j-i);
                    }
                    else{
                        ans+=abs(j-i);
                    }
                }
            }
            
            v.push_back(ans);
            
        }
        
        
        return v;
    }
};