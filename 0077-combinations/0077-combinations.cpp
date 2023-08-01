class Solution {
public:
    vector<vector<int>>v;
    
    void rec(int idx,vector<int>&temp,int k,int n){
      if(temp.size()==k)  
      {
          v.push_back(temp);
          return ;
      }
    
      for(int i=idx;i<=n;i++){
          temp.push_back(i);
           rec(i+1,temp,k,n);
          temp.pop_back();
           
      }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        rec(1,temp,k,n);
        return v;
    }
};