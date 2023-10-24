class Solution { 
public:
    
    int groupify(unordered_map<int,int>&mp,int x){
        
        int groups=0;
        int next =x+1;
        
        for(auto p:mp){
            
            int quotient=p.second/next;
            int remainder=p.second%next;
            
            
            if(remainder==0){
                groups+=quotient;
            }
            else if(quotient>=x-remainder){
                
                groups+=quotient+1;
                
            }
            else return 0;
            
        }
        
        return groups;
    }
    int minGroupsForValidAssignment(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(auto num:nums)mp[num]++;
        
        int mini=INT_MAX;
        
        for(auto p:mp){
            mini=min(mini,p.second);
        }
        
        for(int i=mini;i>=1;i--){
            
            int groups=groupify(mp,i);
            
            if(groups>0)return groups;
        }
        return 0;
    }
};