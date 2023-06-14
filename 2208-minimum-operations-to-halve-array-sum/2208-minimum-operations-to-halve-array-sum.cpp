class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=0;
        int count=0;
        
        priority_queue<double>pq;
        
      
        
        for(int i=0;i<nums.size();i++){
            double val=(double)nums[i];
            sum+=val;
            pq.push(val);
        }
        
          double half=(double)1.0*sum/2.0;
        
        while(sum>half){
            
            double val =(double)1.0*pq.top()/2.0;
            sum-=val;
            count++;
            pq.pop();
            pq.push(val);
            
        }
        
        
        return count;
    }
};