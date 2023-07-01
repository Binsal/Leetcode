class Solution {
public:
    
    bool isvalid(vector<int>&dist,double mid,double hour){
        double time=0;
        
        for(int i=0;i<dist.size();i++){
            time=ceil(time);
            time+=(double)dist[i]/mid;
            
            if(time>hour)return false;
        }
        return true;
        //return false;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {

        int low=1;
        int high=10000000;
        
        int ans=-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            double time=0;
            
            
           if(isvalid(dist,mid,hour)){
                high=mid-1;
           }
            else{
               low=mid+1;
            }
            
        }
        
        
        if(low>10000000)return -1;
        return low;
    }
};