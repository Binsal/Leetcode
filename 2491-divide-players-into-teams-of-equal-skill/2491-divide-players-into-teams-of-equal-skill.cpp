class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        
        long long prod=0;
        int common=skill[0]+skill[skill.size()-1];
        
        if(skill.size()==2)return skill[0]*skill[1];
        int n=skill.size()-1;
        
        for(int i=0;i<skill.size()/2;i++){
            
            if(skill[i]+skill[n-i]!=common){
                return -1;
            }
            else{
                prod+=skill[i]*skill[n-i];
            }
            
        }
        
        return prod;
    }
};