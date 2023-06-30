class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long ans=0;
        
        // int sum1=accumulate(nums1.begin(),nums1.end(),0);
        // int sum2=accumulate(nums2.begin(),nums2.end(),0);
            
       // if(abs(sum1)>=k1 && abs(sum2)>=k2)return 0;
        
         vector<long long int>vec(1e5+1,0);
        
        for(int i=0;i<nums1.size();i++){
            vec[abs(nums1[i]-nums2[i])]++;
        }
        int k=k1+k2;
        
        for(int i=vec.size()-1;i>=1;i--){
            if(vec[i]==0)continue;
            
            if(k>=vec[i]){
                vec[i-1]+=vec[i];
                k-=vec[i];
                vec[i]=0;
            
            }
            else{
                vec[i-1]+=k;
                vec[i]-=k;
                k=0;
                break;
            }
        }
        
        
        for(long long int i=1;i<vec.size();i++){
            ans+=vec[i]*i*i;
        }
        
        return ans;
    }
};