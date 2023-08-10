class FreqStack {
public:
    map<int,int>freq;
    map<int,stack<int>>mp;
    int maxfreq=0;
    
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        maxfreq=max(maxfreq,freq[val]);
        
        mp[freq[val]].push(val);
    }
    
    int pop() {
        
         int val=mp[maxfreq].top();
          
          mp[maxfreq].pop();
            
          if(!mp[freq[val]--].size())maxfreq--;
          return val;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */