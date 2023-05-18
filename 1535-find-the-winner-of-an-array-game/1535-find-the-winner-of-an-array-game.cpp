class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        map<int,int>mp;
        deque<int>q;
        
        if(k>arr.size()){
            return *max_element(arr.begin(),arr.end());
        }
        
        for(int i=0;i<arr.size();i++){
            q.push_back(arr[i]);
        }
        
        while(q.size()>=2){
        
            int first=q.front();
            q.pop_front();
            
            int second=q.front();
            q.pop_front();
            
            if(first>second){
                q.push_front(first);
                q.push_back(second);
                mp[first]++;
               // cout<<first<<" "<<mp[first]<<endl;
                if(mp[first]>=k){
                    cout<<first<<endl;
                    return first;
                }
            }
            else{
                q.push_back(first);
                q.push_front(second);
                mp[second]++;
               // cout<<second<<" "<<mp[second]<<endl;
                if(mp[second]>=k){
                    cout<<second<<endl;
                    return second;
                }
            }
            
            //cout<<q.back()<<endl;
        }
        
        return arr[0];
    }
};