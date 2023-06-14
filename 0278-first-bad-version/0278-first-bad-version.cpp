// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        
        int low=1;
        int high=n;
        int ans=n;
        
        while(low<=high){
           
            long long int mid=((long long )low+(long long )high)/(long long )2;
            
            if(isBadVersion(mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return ans;
    }
};