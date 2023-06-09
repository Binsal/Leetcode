class Solution {
public:
    
    
    bool rec(vector<int>&arr,int i){
        
        if(i<0 || i>=arr.size() || arr[i]<0)return false;
        if(arr[i]==0)return true;
        int val=arr[i];
        arr[i]=-1;
        
        return rec(arr,i+val)||rec(arr,i-val);
        
    }
    
    bool canReach(vector<int>& arr, int start) {
       
        return rec(arr,start);
        
    }
};