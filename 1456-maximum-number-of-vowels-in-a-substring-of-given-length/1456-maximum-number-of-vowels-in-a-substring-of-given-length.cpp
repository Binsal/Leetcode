class Solution {
public:
    int maxVowels(string s, int k) {
        map<int,int>mp;
        int count=0;
        int i=0;
        
        for(auto ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                count++;
            }
            
            mp[i]=count;
            i++;
        }
        
        int maxi=0;
        
        i=0;
        int j=0;
        int n=s.size();
        
        while(j<n){
            if(j-i+1==k){
                maxi=max(mp[j]-mp[i-1],maxi);
                i++;
               
            }
            j++;
        }
        
        
        return maxi;
    }
};