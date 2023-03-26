class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi=0;
        
        for(auto str:strs){
            int count=0;
            for(int i=0;i<str.size();i++){
                
                if(isdigit(str[i]))count++;
                
            }
            
            if(count==str.size()){
                int ans=stoi(str);
                maxi=max(ans,maxi);
            }
            else{
                int len=str.size();
                maxi=max(maxi,len);
            }
            
        }
        
        return maxi;
    }
};