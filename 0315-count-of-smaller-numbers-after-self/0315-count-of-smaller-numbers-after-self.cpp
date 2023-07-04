class Solution {
public:
    
    void merge(vector<pair<int,int>>&v,vector<int>&count,int left,int mid,int right,vector<int>&nums){
        int i=left;
        int j=mid+1;
        int k=0;
        vector<pair<int,int>>vec(right-left+1);
        
        while(i<=mid && j<=right){
            if(v[i].first<=v[j].first){
                vec[k++]=v[j++];
            }
            else{
                count[v[i].second]+=right-j+1;
                vec[k++]=v[i++];
            }
        }
        
        while(i<=mid){
            vec[k++]=v[i];
            i++;
        }
        
        while(j<=right){
            vec[k++]=v[j];
            j++;
        }
        
        for(int l=left;l<=right;l++){
            v[l]=vec[l-left];
        }
    }
    
    void mergeSort(vector<pair<int,int>>&v,vector<int>& count,int left,int right,vector<int>&nums){
        if(left<right){
            int mid=left+(right-left)/2;
            mergeSort(v,count,left,mid,nums);
            mergeSort(v,count,mid+1,right,nums);
            merge(v,count,left,mid,right,nums);
        }
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>v(n);
        vector<int>count(n,0);
        for(int i=0;i<nums.size();i++){
            v[i]={nums[i],i};
        }
        
        mergeSort(v,count,0,n-1,nums);
       // vector<int>count(n);
        return count;
    }
};