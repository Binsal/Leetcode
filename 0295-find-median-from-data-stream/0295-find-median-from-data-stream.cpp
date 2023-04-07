class MedianFinder {
public:
    
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
      maxheap.push(num);
      minheap.push(maxheap.top());
      maxheap.pop();
        
        if(maxheap.size()<minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
        
    }
    
    double findMedian() {
        double ans=0.0;
       // int sz=v.size();
        
        // sort(v.begin(),v.end());
        
        if(maxheap.size()==minheap.size()){
            ans =(double)(maxheap.top()+minheap.top())/2;
        }
        
        else{
            ans= (double)maxheap.top();
        }
        
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */