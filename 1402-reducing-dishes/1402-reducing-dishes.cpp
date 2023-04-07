class Solution {
public:
    
//     int ans=INT_MIN;
   
    
//     void rec(vector<int>&satisfaction,int i,int count){
        
//         if(i==satisfaction.size())return;
//         ans=max(ans,answer);
//         rec(count+1);
//         rec(count);
        
//     }
    
    int maxSatisfaction(vector<int>& satisfaction) {
       
        sort(satisfaction.begin(),satisfaction.end());
        int ans=0;
        
        for(int i=0;i<satisfaction.size();i++){   
             int count=1;
             int answer=0;
            
            for(int j=i;j<satisfaction.size();j++){
                answer+=count*satisfaction[j];
               // cout<<answer<<endl;
                count++;
            }
           // cout<<endl;
            ans=max(ans,answer);
        }
       
        return ans;
    }
};