class MyCalendarThree {
public:
    map<int,int>mp;
    int maxi=0;
    
    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {
        mp[startTime]++;
        mp[endTime]--;
        int events=0;
        
        for(auto p:mp){
            
            events+=p.second;
            
            maxi=max(maxi,events);
            
        }
        
        return maxi;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */