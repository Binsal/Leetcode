class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int mini=INT_MAX;
        if(n==1)return quantities[0];
       
       long long int low=1;
        long long int high=*max_element(quantities.begin(),quantities.end());
         if(n==quantities.size())return high;
        
      
        while(low<=high){
            int mid=(low+high)/2;
            
            long long int fact=0;
            
            for(int i=0;i<quantities.size();i++){
                
                fact+=quantities[i]/mid;
                
                if(quantities[i]%mid)fact++;
                
            }
            
            if(fact>n){
                low=mid+1;
            }
            else{        
            mini=min(mini,mid);
            high=mid-1;
            }
            
        }
        
        
        return mini;
    }
};