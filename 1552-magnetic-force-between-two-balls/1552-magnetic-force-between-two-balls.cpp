class Solution {
public:
    
    int count(vector<int>&position,int d){
        int curr=position[0];
        int ans=1;
        
        for(int i=1;i<position.size();i++){
            
            if(position[i]-curr>=d){
                ans++;
                curr=position[i];
            }
            
        }
        
        return ans;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
       
        int l=0;
        int h=position.back() - position.front();
        int maxi=INT_MIN;
        
        while(l<h){
            
            int mid=h-(h-l)/2;
            
            if(count(position,mid)>=m){
                maxi=max(maxi,mid);
                 l=mid;
               
            }
            else{
                h=mid-1;
                
            }
            
        }
        
        
        return l;
    }
};