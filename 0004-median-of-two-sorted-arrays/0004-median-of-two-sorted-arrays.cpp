class Solution {
public:
    
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    
    void addNum(int num) {
      maxheap.push(num);
      minheap.push(maxheap.top());
      maxheap.pop();
        
        if(maxheap.size()<minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }  
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        double ans=0.0;
       // int sz=v.size();
        
        // sort(v.begin(),v.end());
        
        for(int i=0;i<nums1.size();i++){
            addNum(nums1[i]);
        }
        
        for(int i=0;i<nums2.size();i++){
            addNum(nums2[i]);
        }
        
        
        if(maxheap.size()==minheap.size()){
            ans =(double)(maxheap.top()+minheap.top())/2;
        }
        
        else{
            ans= (double)maxheap.top();
        }
        
       // return ans;
        
        
       return ans;
    }
};